@class NSArray;

@interface CKLargeTitleAccessoryView : UIView

@property (retain, nonatomic) NSArray *accessoryButtons;

+ (id)newComposeButton;
+ (id)newOptionsButton;

- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
