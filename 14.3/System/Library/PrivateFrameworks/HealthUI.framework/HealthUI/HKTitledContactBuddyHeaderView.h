@class NSLayoutConstraint;

@interface HKTitledContactBuddyHeaderView : HKTitledBuddyHeaderView {
    NSLayoutConstraint *_titleBaselineConstraint;
}

- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (double)bottomPadding;
- (id)initWithTopInset:(double)a0 parentViewController:(id)a1;
- (void)traitCollectionDidChange:(id)a0;

@end
