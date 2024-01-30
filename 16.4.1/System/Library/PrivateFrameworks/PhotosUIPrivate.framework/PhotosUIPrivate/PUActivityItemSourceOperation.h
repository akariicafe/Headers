@class NSString, NSObject;
@protocol OS_dispatch_semaphore, PUActivityItemSourceOperationDelegate;

@interface PUActivityItemSourceOperation : NSOperation

@property (readonly, copy) NSString *activityType;
@property (getter=_pu_isCancelled, setter=_pu_setCancelled:) BOOL _pu_cancelled;
@property (readonly, weak) id<PUActivityItemSourceOperationDelegate> delegate;
@property (readonly, getter=pu_isCancelled) BOOL pu_cancelled;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

- (void)main;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 activityType:(id)a1;
- (void)pu_cancel;

@end
