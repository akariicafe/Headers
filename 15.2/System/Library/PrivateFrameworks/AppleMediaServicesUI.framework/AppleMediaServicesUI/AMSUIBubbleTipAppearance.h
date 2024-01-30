@class UIColor, UIFont, UIImage;

@interface AMSUIBubbleTipAppearance : AMSUIAppearance <NSCopying>

@property (retain, nonatomic) UIColor *accessoryButtonColor;
@property (retain, nonatomic) UIFont *accessoryButtonFont;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIColor *footerButtonColor;
@property (retain, nonatomic) UIFont *footerButtonFont;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (retain, nonatomic) UIFont *messageFont;
@property (retain, nonatomic) UIColor *messageTextColor;
@property (retain, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleTextColor;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
