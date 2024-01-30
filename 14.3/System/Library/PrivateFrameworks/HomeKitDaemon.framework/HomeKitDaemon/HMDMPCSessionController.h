@class NSOperationQueue, HMDLogEventDispatcher;

@interface HMDMPCSessionController : HMFObject

@property (readonly, nonatomic) NSOperationQueue *speakerGroupCommandOperationQueue;
@property (readonly, nonatomic) HMDLogEventDispatcher *logEventDispatcher;

- (void).cxx_destruct;
- (id)initWithLogEventDispatcher:(id)a0;
- (void)executeSessionWithSessionData:(id)a0 completion:(id /* block */)a1;

@end
