@class NSArray, NSString, UIView, FCUIActivityListContentView;
@protocol FCUIActivityDisplaying, FCUIExpandingContracting;

@interface FCUIActivityListView : UIScrollView <FCUIContentSizeCategoryAdjusting> {
    FCUIActivityListContentView *_contentView;
    UIView<FCUIActivityDisplaying, FCUIExpandingContracting> *_isolatedActivityView;
    struct CGPoint { double x; double y; } _initialContentOffset;
    BOOL _contentSizeValid;
}

@property (copy, nonatomic) NSArray *activityViews;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic, getter=isFooterPinnedToBottom) BOOL footerPinnedToBottom;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_setExpandedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 viaScaleWithRepresentedActivity:(id)a2 transitionCoordinator:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_setExpandedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 representedActivity:(id)a2 anchorActivityView:(id)a3 collapsedSizeBlock:(id /* block */)a4 preludeBlock:(id /* block */)a5 activityViewAnimationBlock:(id /* block */)a6 transitionCoordinator:(id)a7;
- (void)_recalculateContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrameForContentSize:(struct CGSize { double x0; double x1; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_activityViewForRepresentedActivity:(id)a0;
- (void)setExpandedActivityView:(id)a0 withTransitionCoordinator:(id)a1;
- (void)_configureContentViewIfNecessary;
- (void)isolateActivityView:(id)a0 withInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_setContractedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viaScaleWithRepresentedActivity:(id)a1 transitionCoordinator:(id)a2;
- (void)endIsolation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)touchesShouldCancelInContentView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setContractedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 representedActivity:(id)a1 presentationStyle:(long long)a2 transitionCoordinator:(id)a3;
- (void)_invalidateContentSize;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_orderedSubviewsIncludingHeader:(BOOL)a0 andFooter:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_contentSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setExpandedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 representedActivity:(id)a2 presentationStyle:(long long)a3 transitionCoordinator:(id)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_setExpandedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 viaResizeWithRepresentedActivity:(id)a2 transitionCoordinator:(id)a3;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_setContractedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viaResizeWithRepresentedActivity:(id)a1 transitionCoordinator:(id)a2;

@end
