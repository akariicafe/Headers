@class UIColor, UIFont, UIImage, UIImageSymbolConfiguration;

@interface AMSUIBannerAppearance : AMSUIAppearance <NSCopying>

@property (retain, nonatomic) UIColor *accessoryButtonBackgroundColor;
@property (retain, nonatomic) UIColor *accessoryButtonColor;
@property (retain, nonatomic) UIFont *accessoryButtonFont;
@property (retain, nonatomic) UIColor *accessorySecondaryButtonBackgroundColor;
@property (retain, nonatomic) UIColor *accessorySecondaryButtonColor;
@property (retain, nonatomic) UIFont *accessorySecondaryButtonFont;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (retain, nonatomic) UIFont *messageFont;
@property (retain, nonatomic) UIColor *messageTextColor;
@property (nonatomic) long long primaryImageRenderingMode;
@property (retain, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleTextColor;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
