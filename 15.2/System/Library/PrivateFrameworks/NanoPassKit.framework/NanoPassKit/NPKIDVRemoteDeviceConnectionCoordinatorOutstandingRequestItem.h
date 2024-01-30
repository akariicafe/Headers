@class NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface NPKIDVRemoteDeviceConnectionCoordinatorOutstandingRequestItem : NSObject {
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_queue> *_timeoutQueue;
}

@property (copy, nonatomic) NSString *messageIdentifier;
@property (copy, nonatomic) id completion;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ timeoutHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithtimeoutQueue:(id)a0;
- (void)setOrResetCleanupTimer;
- (void)invalidateCleanupTimer;

@end
