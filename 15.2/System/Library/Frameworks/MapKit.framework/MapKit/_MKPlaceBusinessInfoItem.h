@class UIFont, NSString, UIColor, UIImage, NSAttributedString;

@interface _MKPlaceBusinessInfoItem : NSObject {
    NSString *_displayString;
    BOOL _isAvailable;
    NSAttributedString *_formattedDisplayString;
    UIFont *_font;
    UIColor *_textColor;
    NSString *_symbolName;
}

@property (readonly, nonatomic) NSString *amenityString;
@property (readonly, nonatomic) UIImage *amenityIcon;
@property (readonly, nonatomic) NSAttributedString *displayString;

+ (id)itemWithDescription:(id)a0 availability:(BOOL)a1 symbolName:(id)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_resolvedAvailabilityIconWithFont:(id)a0 textColor:(id)a1;
- (void)setFont:(id)a0 textColor:(id)a1;

@end
