@class UIColor, NSAttributedString, NSString;

@interface ICAttachmentBrickLabelV2 : UILabel

@property (nonatomic) BOOL vibrant;
@property (nonatomic) BOOL disableVibrancy;
@property (retain, nonatomic) UIColor *defaultTextColor;
@property (copy, nonatomic) NSAttributedString *ic_attributedStringValue;
@property (copy, nonatomic) NSString *ic_stringValue;

- (BOOL)allowsVibrancy;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (void)setTextColor:(id)a0;

@end
