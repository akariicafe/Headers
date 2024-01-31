@interface ContactsUI.CNAvatarPosterPairCollectionViewCell : UICollectionViewCell <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ maximumVerticalRevealFraction;
    void /* unknown type, empty encoding */ showShadow;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ scrollableContentView;
    void /* unknown type, empty encoding */ defaultScrollAnimationDuration;
    void /* unknown type, empty encoding */ maximumRevealProgressWhenRevealingDisallowed;
}

- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
