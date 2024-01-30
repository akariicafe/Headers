@class UIColor, LPPointUnit, LPCaptionBarAccessoryStyle, LPAudioPlayButtonStyle, LPPadding, LPIconBadgeStyle, LPButtonStyle, LPImageViewStyle, LPVerticalTextStackViewStyle;

@interface LPCaptionBarStyle : NSObject

@property (readonly, nonatomic) LPImageViewStyle *leadingIcon;
@property (readonly, nonatomic) LPImageViewStyle *trailingIcon;
@property (readonly, nonatomic) LPIconBadgeStyle *leadingIconBadge;
@property (readonly, nonatomic) LPIconBadgeStyle *trailingIconBadge;
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *leadingAccessory;
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *trailingAccessory;
@property (readonly, nonatomic) LPVerticalTextStackViewStyle *textStack;
@property (retain, nonatomic) LPPointUnit *minimumWidth;
@property (readonly, nonatomic) LPAudioPlayButtonStyle *playButton;
@property (readonly, retain, nonatomic) LPPadding *playButtonPadding;
@property (retain, nonatomic) LPButtonStyle *button;
@property (nonatomic) BOOL usesOutOfLineButton;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) unsigned int minimumNumberOfLinesToVerticallyCenter;

- (void).cxx_destruct;
- (id)leftIcon;
- (id)rightIcon;
- (id)initWithPlatform:(long long)a0 sizeClass:(unsigned long long)a1 fontScalingFactor:(double)a2;
- (id)leftAccessory;
- (id)rightAccessory;

@end
