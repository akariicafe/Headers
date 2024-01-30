@class NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface NPKProvisioningServiceOutstandingRequest : NSObject

@property (copy, nonatomic) NSString *messageIdentifier;
@property (copy, nonatomic) id completionHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ timeoutHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timeoutQueue;

- (void).cxx_destruct;
- (void)invalidateCleanupTimer;
- (void)setOrResetCleanupTimer;

@end
