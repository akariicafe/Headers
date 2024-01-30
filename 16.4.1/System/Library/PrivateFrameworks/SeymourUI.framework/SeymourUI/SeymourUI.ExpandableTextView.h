@class UIView;

@interface SeymourUI.ExpandableTextView : UIView {
    void /* unknown type, empty encoding */ onMoreTapped;
    void /* unknown type, empty encoding */ linkIconsAndTitles;
    void /* unknown type, empty encoding */ linksBottomConstraint;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ textLabelBottomConstraint;
    void /* unknown type, empty encoding */ textLabelTruncatedLines;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ moreTextLabel;
    void /* unknown type, empty encoding */ textLabel;
    void /* unknown type, empty encoding */ sizingLabel;
    void /* unknown type, empty encoding */ tapTargetView;
    void /* unknown type, empty encoding */ layout;
}

@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)didTapLink:(id)a0;
- (void)handleTapGesture:(id)a0;

@end
