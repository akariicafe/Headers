@class UIAlertController;

@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView

@property (weak, nonatomic) UIAlertController *alertController;
@property (nonatomic) BOOL scrollableHeaderViewHasRealContent;

- (void).cxx_destruct;
- (BOOL)_shouldShowSeparatorAboveActionsSequenceView;
- (id)_alertController;
- (BOOL)_shouldInstallContentGuideConstraints;
- (id)initWithAlertController:(id)a0 actionGroup:(id)a1 actionHandlerInvocationDelegate:(id)a2;
- (id)defaultVisualStyleForTraitCollection:(id)a0 presentationStyle:(long long)a1;

@end
