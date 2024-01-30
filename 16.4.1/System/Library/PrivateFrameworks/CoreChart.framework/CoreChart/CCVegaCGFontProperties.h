@class NSString;

@interface CCVegaCGFontProperties : NSObject

@property (retain, nonatomic) NSString *fontFamily;
@property (retain, nonatomic) NSString *fontSize;
@property (retain, nonatomic) NSString *fontStyle;
@property (retain, nonatomic) NSString *fontWeight;
@property (retain, nonatomic) NSString *fontVariant;
@property (retain, nonatomic) NSString *lineHeight;

- (void).cxx_destruct;
- (id)initWithCSSFontString:(id)a0;

@end
