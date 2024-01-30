@class UIColor, NSString, UIImage, NSURL;

@interface SKUIGiftTheme : NSObject <NSCopying>

@property (nonatomic) long long themeIdentifier;
@property (copy, nonatomic) NSString *themeName;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIColor *bodyTextColor;
@property (copy, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIImage *headerImage;
@property (copy, nonatomic) NSURL *headerImageURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithThemeDictionary:(id)a0;

@end
