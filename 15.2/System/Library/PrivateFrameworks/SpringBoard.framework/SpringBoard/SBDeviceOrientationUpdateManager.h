@class NSHashTable;
@protocol BSInvalidatable;

@interface SBDeviceOrientationUpdateManager : NSObject {
    NSHashTable *_deferralAssertions;
    BOOL _deviceOrientationIsDirty;
    id<BSInvalidatable> _stateCaptureHandle;
}

@property (readonly, nonatomic, getter=isCurrentlyDeferringOrientationUpdates) BOOL currentlyDeferringOrientationUpdates;
@property (nonatomic) long long lastUpdatedDeviceOrientation;

- (id)deviceOrientationUpdateDeferralAssertionWithReason:(id)a0;
- (void)_endDeferringOrientationUpdatesForAssertion:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_enqueueOrientationUpdateToDeviceOrientation:(long long)a0;
- (id)succinctDescription;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)_deviceOrientationUpdateNeededForOrientation:(long long)a0;
- (void)dealloc;

@end
