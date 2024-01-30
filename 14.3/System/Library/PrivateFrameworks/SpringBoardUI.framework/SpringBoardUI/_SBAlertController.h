@class SBAlertItem, NSString;
@protocol UIAlertControllerVisualStyleProviding, _SBAlertControllerDelegate;

@interface _SBAlertController : UIAlertController <BSDescriptionProviding> {
    id<UIAlertControllerVisualStyleProviding> _styleProvider;
}

@property (weak, nonatomic) SBAlertItem *alertItem;
@property (weak, nonatomic) id<_SBAlertControllerDelegate> alertControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)setHiddenOnClonedDisplay:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (id)_styleProvider;
- (id)initWithStyleProvider:(id)a0;

@end
