@class NSArray;

@interface CKLargeTitleAccessoryView : UIView

@property (retain, nonatomic) NSArray *accessoryButtons;

+ (id)newComposeButton;
+ (id)newOptionsButton;

- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
