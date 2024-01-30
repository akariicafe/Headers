@class NSString, NSMutableDictionary;
@protocol ITIdleTimerStateRequestHandling, BSInvalidatable;

@interface ITIdleTimerStateModel : NSObject <ITIdleTimerStateRequestDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    NSMutableDictionary *_access_idleTimerAssertionsByConfigIdentifier;
    id<ITIdleTimerStateRequestHandling> _requestHandler;
    id<BSInvalidatable> _stateCaptureAssertion;
}

@property (readonly, getter=isIdleTimerServiceAvailable) BOOL idleTimerServiceAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_addStateCaptureHandler;
- (id)_access_newIdleTimerAssertionWithConfiguration:(id)a0 forReason:(id)a1 error:(id *)a2;
- (BOOL)handleIdleEvent:(unsigned long long)a0 usingConfigurationWithIdentifier:(id)a1;
- (id)newIdleTimerAssertionWithConfiguration:(id)a0 forReason:(id)a1 error:(id *)a2;
- (void)resendIdleTimerAssertions;

@end
