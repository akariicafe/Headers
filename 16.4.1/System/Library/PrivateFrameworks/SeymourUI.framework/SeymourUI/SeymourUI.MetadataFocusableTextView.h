@class NSArray;

@interface SeymourUI.MetadataFocusableTextView : UIView {
    void /* unknown type, empty encoding */ onEntryTapped;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ textViewHeightConstraint;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ lastWidth;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
