@class TLKStackView, TLKStoreButton, TLKImageView, SFCommand;

@interface SearchUIRequestButton : SearchUIAccessoryViewController

@property (retain, nonatomic) TLKStoreButton *viewButton;
@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) TLKStackView *stackView;
@property int lastState;
@property (retain, nonatomic) SFCommand *command;

- (void).cxx_destruct;
- (id)setupView;
- (void)buttonPressed;
- (void)_updateButtonState:(int)a0;
- (id)imageWithSymbolName:(id)a0 accessibilityDescription:(id)a1;
- (BOOL)shouldTopAlignForAccessibilityContentSizes;
- (void)updateButtonState:(BOOL)a0 withState:(int)a1;

@end
