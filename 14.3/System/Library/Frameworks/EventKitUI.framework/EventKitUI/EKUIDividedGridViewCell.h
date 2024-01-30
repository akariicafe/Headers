@class UIColor, EKUIDividedGridViewController, NSLayoutConstraint, UITextLabel;

@interface EKUIDividedGridViewCell : UIView {
    UIColor *_bgColor;
}

@property (weak) EKUIDividedGridViewController *viewController;
@property (weak) NSLayoutConstraint *widthConstraint;
@property (retain) UITextLabel *label;
@property (nonatomic) BOOL selected;

- (id)init;
- (void).cxx_destruct;
- (id)selectedTextColor;
- (id)initWithBackgroundColor:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
