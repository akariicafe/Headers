@class NSHashTable;
@protocol BSInvalidatable;

@interface SBDeviceOrientationUpdateManager : NSObject {
    NSHashTable *_deferralAssertions;
    BOOL _deviceOrientationIsDirty;
    id<BSInvalidatable> _stateCaptureHandle;
}

@property (readonly, nonatomic, getter=isCurrentlyDeferringOrientationUpdates) BOOL currentlyDeferringOrientationUpdates;
@property (nonatomic) long long lastUpdatedDeviceOrientation;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)deviceOrientationUpdateDeferralAssertionWithReason:(id)a0;
- (void)dealloc;
- (void)_enqueueOrientationUpdateToDeviceOrientation:(long long)a0;
- (id)succinctDescription;
- (void)_legacy_enqueueOrientationUpdateToDeviceOrientation:(long long)a0 source:(id)a1;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)_deviceOrientationUpdateNeededForOrientation:(long long)a0;
- (id)description;
- (void)_endDeferringOrientationUpdatesForAssertion:(id)a0;
- (void).cxx_destruct;

@end
