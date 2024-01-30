@class DIDropInRequest, NSUUID, NSRecursiveLock, DIXPCConnectionManager;
@protocol DIDropInSessionDelegate;

@interface DIDropInSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) DIDropInRequest *request;
@property (weak, nonatomic) DIXPCConnectionManager *connectionManager;
@property (readonly, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long stateReason;
@property (nonatomic) BOOL needsInitialUplinkMuteStatus;
@property (weak, nonatomic) id<DIDropInSessionDelegate> delegate;
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted;

+ (id)stringForDropInSessionState:(unsigned long long)a0;
+ (id)stringForDropInSessionStateReason:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRequest:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithSession:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)failWithError:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)endWithCompletionHandler:(id /* block */)a0;
- (void)cancelWithCompletionHandler:(id /* block */)a0;
- (void)cancelWithError:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithNullableRequest:(id)a0;
- (void)updateUplinkMuteStatus:(BOOL)a0;

@end
