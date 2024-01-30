@class UIColor, NSString;

@interface CalendarSpecialDayData : NSObject

@property (nonatomic) long long dayType;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSString *locale;

- (id)init;
- (void).cxx_destruct;

@end
