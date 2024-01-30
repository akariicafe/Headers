@class NSString, UILabel, UINavigationBar;

@interface _UINavBarPrompt : UIView {
    UILabel *_label;
    UINavigationBar *_navBar;
}

@property (copy, nonatomic) NSString *prompt;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_updateLabelTextColorAndFontReturningShadowOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })promptBounds;
- (void).cxx_destruct;
- (id)initWithNavBar:(id)a0;

@end
