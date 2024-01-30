@protocol UIFocusEnvironment, _UIHostedFocusSystemDelegate;

@interface _UIHostedFocusSystem : UIFocusSystem {
    BOOL _didSetFocusSoundGenerator;
}

@property (readonly, weak, nonatomic) id<UIFocusEnvironment> hostEnvironment;
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id<_UIHostedFocusSystemDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)_isEligibleForFocusInteraction;
- (BOOL)containsChildOfHostEnvironment:(id)a0;
- (BOOL)_requiresFocusedItemToHaveContainingView;
- (id)_focusSoundGenerator;
- (id)_hostFocusSystem;
- (BOOL)_postsFocusUpdateNotifications;
- (void)_setFocusSoundGenerator:(id)a0;
- (id)_initWithHostEnvironment:(id)a0;

@end
