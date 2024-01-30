@class UIAlertController;

@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView

@property (weak, nonatomic) UIAlertController *alertController;
@property (nonatomic) BOOL scrollableHeaderViewHasRealContent;

- (id)_alertController;
- (BOOL)_shouldShowSeparatorAboveActionsSequenceView;
- (BOOL)_shouldInstallContentGuideConstraints;
- (void).cxx_destruct;
- (id)initWithAlertController:(id)a0 actionGroup:(id)a1 actionHandlerInvocationDelegate:(id)a2;
- (id)defaultVisualStyleForTraitCollection:(id)a0 presentationStyle:(long long)a1;

@end
