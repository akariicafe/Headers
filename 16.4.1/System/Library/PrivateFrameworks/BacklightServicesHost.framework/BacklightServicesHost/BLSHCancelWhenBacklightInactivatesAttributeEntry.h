@class NSString, BLSBacklight;

@interface BLSHCancelWhenBacklightInactivatesAttributeEntry : BLSValidWhenBacklightInactiveAttributeEntry <BLSBacklightStateObserving> {
    BLSBacklight *_backlight;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_active;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)reactivateIfPossible;
- (id)initForAttribute:(id)a0 fromAssertion:(id)a1 forService:(id)a2;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvent:(id)a2;
- (void)invalidate;
- (void).cxx_destruct;

@end
