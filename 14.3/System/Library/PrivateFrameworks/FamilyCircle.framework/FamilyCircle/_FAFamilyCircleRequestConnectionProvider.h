@class NSLock, NSString, NSXPCConnection;
@protocol FAFamilyCircleRequestConnectionFactory;

@interface _FAFamilyCircleRequestConnectionProvider : NSObject <FAFamilyCircleRequestConnectionProvider>

@property (retain, nonatomic) id<FAFamilyCircleRequestConnectionFactory> factory;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)createResumedConnectionWithFactory:(id)a0 provider:(id)a1;

- (void)connectionWasInterrupted:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)serviceConnection;
- (id)initWithConnectionFactory:(id)a0;
- (void)connectionWasInvalidated:(id)a0;

@end
