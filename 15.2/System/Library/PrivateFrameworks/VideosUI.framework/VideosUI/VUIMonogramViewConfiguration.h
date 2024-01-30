@class UIColor, UIImage;

@interface VUIMonogramViewConfiguration : NSObject <NSCopying>

@property (nonatomic) long long style;
@property (nonatomic) double focusedSizeIncrease;
@property (retain, nonatomic) UIColor *unfocusedBgColor;
@property (retain, nonatomic) UIColor *focusedBgColor;
@property (readonly, nonatomic) double unfocusedImageAlpha;
@property (nonatomic) double unfocusedShadowAlpha;
@property (nonatomic) double focusedShadowAlpha;
@property (retain, nonatomic) UIImage *unfocusedShadowImage;
@property (retain, nonatomic) UIImage *focusedShadowImage;
@property (nonatomic) long long titleTextStyle;
@property (retain, nonatomic) UIColor *titleUnfocusedColor;
@property (retain, nonatomic) UIColor *titleFocusedColor;
@property (nonatomic) long long subtitleTextStyle;
@property (retain, nonatomic) UIColor *subtitleUnfocusedColor;
@property (retain, nonatomic) UIColor *subtitleFocusedColor;

- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithShadowImages:(BOOL)a0;

@end
