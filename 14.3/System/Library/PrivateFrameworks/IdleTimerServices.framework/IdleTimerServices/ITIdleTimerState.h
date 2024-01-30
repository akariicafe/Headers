@class ITIdleTimerStateModel;
@protocol ITIdleTimerStateRequestHandling;

@interface ITIdleTimerState : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    ITIdleTimerStateModel *_model;
    id<ITIdleTimerStateRequestHandling> _requestHandler;
}

@property (class, readonly, nonatomic) BOOL isIdleTimerServiceAvailable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)newAssertionToDisableIdleTimerForReason:(id)a0;
- (id)_initWithModel:(id)a0;
- (BOOL)isIdleTimerServiceAvailable;
- (id)_init;
- (id)newAssertionToDisableIdleTimerForReason:(id)a0 error:(id *)a1;
- (id)newIdleTimerAssertionWithConfiguration:(id)a0 forReason:(id)a1 error:(id *)a2;
- (id)newIdleTimerAssertionWithConfiguration:(id)a0 forReason:(id)a1;

@end
