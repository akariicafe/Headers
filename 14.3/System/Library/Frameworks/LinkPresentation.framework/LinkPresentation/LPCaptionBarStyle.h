@class LPImageViewStyle, LPPointUnit, LPPadding, LPMusicPlayButtonStyle, LPCaptionBarAccessoryStyle, LPVerticalTextStackViewStyle, LPButtonStyle;

@interface LPCaptionBarStyle : NSObject

@property (readonly, nonatomic) LPImageViewStyle *leadingIcon;
@property (readonly, nonatomic) LPImageViewStyle *trailingIcon;
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *leadingAccessory;
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *trailingAccessory;
@property (readonly, nonatomic) LPVerticalTextStackViewStyle *textStack;
@property (retain, nonatomic) LPPointUnit *minimumWidth;
@property (readonly, nonatomic) LPImageViewStyle *placeholderIcon;
@property (readonly, nonatomic) LPMusicPlayButtonStyle *playButton;
@property (readonly, retain, nonatomic) LPPadding *playButtonPadding;
@property (retain, nonatomic) LPButtonStyle *button;

- (void).cxx_destruct;
- (id)leftIcon;
- (id)rightIcon;
- (id)leftAccessory;
- (id)rightAccessory;
- (id)initWithPlatform:(long long)a0 sizeClass:(unsigned long long)a1;

@end
