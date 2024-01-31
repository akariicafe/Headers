@class UIColor, UIFont, UIButtonConfiguration, UIVisualEffectView, UIImageSymbolConfiguration;

@interface CNSharedProfileBannerStyle : NSObject

@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIColor *subtitleTextColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (retain, nonatomic) UIButtonConfiguration *actionButtonConfiguration;
@property (retain, nonatomic) UIImageSymbolConfiguration *xmarkButtonColorConfiguration;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView;
@property (nonatomic) double leadingTrailingInset;

+ (id)defaultStyle;
+ (id)defaultActionButtonConfiguration;

- (void).cxx_destruct;

@end
