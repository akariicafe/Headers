@protocol UIFocusEnvironment, _UIHostedFocusSystemDelegate;

@interface _UIHostedFocusSystem : UIFocusSystem {
    BOOL _didSetFocusSoundGenerator;
}

@property (readonly, weak, nonatomic) id<UIFocusEnvironment> hostEnvironment;
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id<_UIHostedFocusSystemDelegate> delegate;

- (BOOL)_isEligibleForFocusInteraction;
- (void).cxx_destruct;
- (BOOL)containsChildOfHostEnvironment:(id)a0;
- (BOOL)_isEligibleForFocusOcclusion;
- (BOOL)_requiresFocusedItemToHaveContainingView;
- (id)_focusSoundGenerator;
- (BOOL)_prefersDeferralForFocusUpdateInContext:(id)a0;
- (void)_setFocusSoundGenerator:(id)a0;
- (BOOL)_postsFocusUpdateNotifications;
- (id)_initWithHostEnvironment:(id)a0;
- (id)_hostFocusSystem;

@end
