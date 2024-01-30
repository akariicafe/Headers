@class NSString, PLPillContentItem, UIView, NSLayoutConstraint;

@interface PLPillContentWrapperView : UIView <PLContentSizeCategoryAdjusting> {
    UIView *_contentView;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (nonatomic, getter=isTopConstraintBreakable) BOOL topConstraintBreakable;
@property (retain, nonatomic) PLPillContentItem *contentItem;
@property (readonly, nonatomic) long long appearState;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (id)_contentLabel;
- (void)_makeBottomConstraintBreakable;
- (void)_makeTopConstraintBreakable;
- (void)_setContentView:(id)a0 transitionCoordinator:(id)a1;
- (void)_updateConstraintsPriority;
- (void)beginAppearanceTransition:(BOOL)a0;
- (void)endAppearanceTransition:(BOOL)a0;
- (void)setContentItem:(id)a0 transitionCoordinator:(id)a1;
- (void)updateWithContentItem:(id)a0;

@end
