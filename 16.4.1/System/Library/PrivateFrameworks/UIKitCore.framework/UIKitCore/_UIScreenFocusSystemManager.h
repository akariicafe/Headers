@class _UIFocusScrollManager, NSString, UIWindowScene;

@interface _UIScreenFocusSystemManager : NSObject <_UIFocusSystemDelegate, _UIFocusMovementPerformerDelegate> {
    BOOL _handlesFocusMovementAction;
}

@property (nonatomic, getter=_uiktest_allowsForwardingFocusMovementActions, setter=_uiktest_setAllowsForwardingFocusMovementActions:) BOOL allowsForwardingFocusMovementActions;
@property (readonly, weak, nonatomic) UIWindowScene *windowScene;
@property (readonly, nonatomic) _UIFocusScrollManager *scrollManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_focusItemContainerForFocusSystem:(id)a0;
- (id)_focusMapContainerForFocusSystem:(id)a0;
- (void)_focusSystem:(id)a0 didFinishUpdatingFocusInContext:(id)a1;
- (BOOL)_focusSystem:(id)a0 performFocusMovementWithInfo:(id)a1;
- (BOOL)_focusSystem:(id)a0 shouldRestoreFocusInContext:(id)a1;
- (BOOL)_handleFailedFocusMovementRequest:(id)a0 withPerformer:(id)a1;
- (id)_preferredFocusEnvironmentsForFocusSystem:(id)a0;
- (BOOL)_shouldForwardFocusMovementRequest:(id)a0;
- (BOOL)_shouldWaitForFocusMovementActionToEnableFocusSystem:(id)a0;
- (id)initWithScene:(id)a0 scrollManager:(id)a1;

@end
