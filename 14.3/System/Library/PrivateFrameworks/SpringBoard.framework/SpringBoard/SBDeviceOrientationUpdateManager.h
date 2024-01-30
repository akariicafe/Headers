@class NSHashTable;
@protocol BSInvalidatable;

@interface SBDeviceOrientationUpdateManager : NSObject {
    NSHashTable *_deferralAssertions;
    BOOL _deviceOrientationIsDirty;
    id<BSInvalidatable> _stateCaptureHandle;
}

@property (readonly, nonatomic, getter=isCurrentlyDeferringOrientationUpdates) BOOL currentlyDeferringOrientationUpdates;
@property (nonatomic) long long lastUpdatedDeviceOrientation;

- (id)init;
- (void).cxx_destruct;
- (void)_endDeferringOrientationUpdatesForAssertion:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (BOOL)_deviceOrientationUpdateNeededForOrientation:(long long)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;
- (id)deviceOrientationUpdateDeferralAssertionWithReason:(id)a0;
- (void)_enqueueOrientationUpdateToDeviceOrientation:(long long)a0;

@end
