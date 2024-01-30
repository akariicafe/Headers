@class WFFloatingButton, WFModulesQuickLookView, UIStackView;
@protocol WFRunWorkflowFooterViewDelegate;

@interface WFRunWorkflowFooterView : UICollectionReusableView

@property (retain, nonatomic) WFFloatingButton *addButton;
@property (retain, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) id<WFRunWorkflowFooterViewDelegate> delegate;
@property (readonly, nonatomic) WFModulesQuickLookView *quickLookView;
@property (readonly, nonatomic) BOOL quickLookViewHidden;
@property (readonly, nonatomic) BOOL addButtonHidden;

+ (double)preferredHeightWithQuickLookVisible:(BOOL)a0 addButtonVisible:(BOOL)a1 forWidth:(double)a2;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setQuickLookViewHidden:(BOOL)a0 addButtonHidden:(BOOL)a1;
- (void)updateAddButtonGradient;
- (void)didTapAddButton;

@end
