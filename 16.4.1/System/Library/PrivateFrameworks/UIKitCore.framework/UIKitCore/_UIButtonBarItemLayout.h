@class _UITAMICAdaptorView, UIView, NSLayoutConstraint, UIBarButtonItem;

@interface _UIButtonBarItemLayout : _UIButtonBarLayout {
    UIBarButtonItem *_item;
    UIView *_itemView;
    _UITAMICAdaptorView *_itemViewWrapper;
    NSLayoutConstraint *_requestedSize;
    NSLayoutConstraint *_maximumAlignmentSize;
    NSLayoutConstraint *_groupSameSize;
    NSLayoutConstraint *_popoverGuideLeading;
    NSLayoutConstraint *_popoverGuideTrailing;
    NSLayoutConstraint *_popoverGuideTop;
    NSLayoutConstraint *_popoverGuideHeight;
}

@property (nonatomic) BOOL useGroupSizing;
@property (nonatomic) BOOL suppressSpacing;
@property (copy, nonatomic) id /* block */ itemViewGenerator;

- (id)barButtonItem;
- (void)_addLayoutViews:(id)a0;
- (void)_configure;
- (BOOL)shouldHorizontallyCenterView:(id)a0;
- (void)_addLayoutGuides:(id)a0;
- (id)initWithLayoutMetrics:(id)a0 barButtonItem:(id)a1;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)a0;
- (id)initWithLayoutMetrics:(id)a0;
- (void)_addConstraintsToActivate:(id)a0 toDeactivate:(id)a1;
- (void)dirtyLayoutForPlainAppearanceChange:(BOOL)a0 doneAppearanceChanged:(BOOL)a1;
- (BOOL)_shouldBeDirty;
- (void)_updateItemView;
- (void)_updateItemViewSizing;
- (void)_updateCustomView;
- (id)description;
- (void).cxx_destruct;

@end
