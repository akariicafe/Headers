@class UIFont, NSString, UIColor, NSAttributedString;

@interface _MKPlaceBusinessInfoItem : NSObject {
    NSString *_displayString;
    BOOL _isAvailable;
    NSAttributedString *_formattedDisplayString;
    UIFont *_font;
    UIColor *_textColor;
}

@property (readonly, nonatomic) NSAttributedString *displayString;

+ (id)itemWithDescription:(id)a0 availability:(BOOL)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setFont:(id)a0 textColor:(id)a1;

@end
