@class NSLayoutConstraint;

@interface HKTitledContactBuddyHeaderView : HKTitledBuddyHeaderView {
    NSLayoutConstraint *_titleBaselineConstraint;
}

- (void)_updateForCurrentSizeCategory;
- (double)bottomPadding;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithTopInset:(double)a0 parentViewController:(id)a1;

@end
