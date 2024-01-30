@class NSString, UILabel, UINavigationBar;

@interface _UINavBarPrompt : UIView {
    UILabel *_label;
    UINavigationBar *_navBar;
}

@property (copy, nonatomic) NSString *prompt;

- (struct CGSize { double x0; double x1; })_updateLabelTextColorAndFontReturningShadowOffset;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelFrame;
- (void)layoutSubviews;
- (id)initWithNavBar:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })promptBounds;

@end
