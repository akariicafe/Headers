@interface CKInputView : UIInputView

@property (nonatomic) struct CGSize { double width; double height; } lastContentSize;
@property (nonatomic) long long lastContentSizeInterfaceOrientation;

+ (struct CGSize { double x0; double x1; })defaultContentSize;
+ (struct CGSize { double x0; double x1; })defaultContentSizeLargerThanKeyboard:(BOOL *)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
