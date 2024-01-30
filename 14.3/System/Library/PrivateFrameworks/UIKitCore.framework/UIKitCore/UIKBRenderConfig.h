@class NSString, _UIButtonBarButtonVisualProvider;

@interface UIKBRenderConfig : NSObject <NSCopying> {
    BOOL _useEmojiStyles;
}

@property (nonatomic) BOOL lightKeyboard;
@property (nonatomic) long long forceQuality;
@property (nonatomic) double blurRadius;
@property (nonatomic) double blurSaturation;
@property (nonatomic) double keycapOpacity;
@property (nonatomic) double lightKeycapOpacity;
@property (nonatomic) NSString *controlKeyBackgroundName;
@property (nonatomic) NSString *activatedKeyplaneSwitchControlKeyBackgroundName;
@property (nonatomic) BOOL isFloating;
@property (readonly, nonatomic) BOOL whiteText;
@property (readonly, nonatomic) long long backdropStyle;
@property (readonly, nonatomic) long long blurEffectStyle;
@property (readonly, nonatomic) _UIButtonBarButtonVisualProvider *buttonBarVisualProvider;

+ (id)defaultConfig;
+ (long long)backdropStyleForStyle:(long long)a0 quality:(long long)a1;
+ (id)defaultEmojiConfig;
+ (id)lowQualityDarkConfig;
+ (id)darkConfig;
+ (id)configForAppearance:(long long)a0 inputMode:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
