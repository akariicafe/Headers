@interface SeymourUI.ExpandingTextCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ linkIconsAndTitles;
    void /* unknown type, empty encoding */ textLabelTruncatedLines;
    void /* unknown type, empty encoding */ moreTextLabel;
    void /* unknown type, empty encoding */ textLabel;
    void /* unknown type, empty encoding */ sizingLabel;
    void /* unknown type, empty encoding */ tapTargetView;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ layout;
}

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleTapGesture:(id)a0;
- (void)didTapLink:(id)a0;

@end
