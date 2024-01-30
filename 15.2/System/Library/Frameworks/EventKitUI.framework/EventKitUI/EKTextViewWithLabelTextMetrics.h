@class UIColor, UIFont, NSString;

@interface EKTextViewWithLabelTextMetrics : UITextView <CalendarLabelTextMetrics>

@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *text;

@end
