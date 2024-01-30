@class UIAlertController;

@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView

@property (weak, nonatomic) UIAlertController *alertController;
@property (nonatomic) BOOL scrollableHeaderViewHasRealContent;

- (id)_alertController;
- (void).cxx_destruct;
- (BOOL)_shouldInstallContentGuideConstraints;
- (BOOL)_shouldShowSeparatorAboveActionsSequenceView;
- (id)defaultVisualStyleForTraitCollection:(id)a0 presentationStyle:(long long)a1;
- (id)initWithAlertController:(id)a0 actionGroup:(id)a1 actionHandlerInvocationDelegate:(id)a2;

@end
