@class UIFont, NSString, UIColor, NSAttributedString;

@interface UISimpleTextPrintFormatter : UIPrintFormatter

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long textAlignment;

- (id)initWithText:(id)a0;
- (id)initWithAttributedText:(id)a0;

@end
