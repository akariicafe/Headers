@class UIImageView, NSString;

@interface UIKeyboardInputModeIndicator : UIView

@property (retain, nonatomic) UIImageView *indicatorView;
@property (retain, nonatomic) NSString *inputModeIdentifier;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)updateIndicator;
- (id)initWithKeyboardInputModeIdentifier:(id)a0;
- (void)setupView;

@end
