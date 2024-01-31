@class NSString;
@protocol CLSClientDelegate;

@interface CLSClient : NSObject <CLSClientInterface>

@property (weak, nonatomic) id<CLSClientDelegate> delagate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (oneway void)clientRemote_databaseRecreated;

@end
