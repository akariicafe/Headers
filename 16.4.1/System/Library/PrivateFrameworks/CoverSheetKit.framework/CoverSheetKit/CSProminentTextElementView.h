@class UIFont, NSString, UIColor, UILabel, NSDate;

@interface CSProminentTextElementView : CSProminentElementView <CSProminentTextDefining>

@property (readonly, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *overrideString;
@property (retain, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) UIColor *primaryTextColor;

+ (unsigned long long)elementType;

- (id)displayString;
- (id)initWithDate:(id)a0 font:(id)a1 textColor:(id)a2;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
