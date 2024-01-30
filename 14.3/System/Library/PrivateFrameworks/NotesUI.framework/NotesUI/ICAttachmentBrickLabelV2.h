@class UIColor, NSAttributedString, NSString;

@interface ICAttachmentBrickLabelV2 : UILabel

@property (nonatomic) BOOL vibrant;
@property (nonatomic) BOOL disableVibrancy;
@property (retain, nonatomic) UIColor *defaultTextColor;
@property (retain, nonatomic) NSAttributedString *ic_attributedStringValue;
@property (retain, nonatomic) NSString *ic_stringValue;

- (void).cxx_destruct;
- (void)setTextColor:(id)a0;
- (id)text;
- (BOOL)allowsVibrancy;
- (void)setText:(id)a0;

@end
