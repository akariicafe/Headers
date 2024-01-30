@class NSRegularExpression;

@interface ADDateStringNormalizer : NSObject

@property (retain, nonatomic) NSRegularExpression *regularExpression;

+ (id)dateFromString:(id)a0;
+ (id)formatter;
+ (id)normalizers;
+ (id)relativeDateFormatStringForDate:(id)a0;

- (void).cxx_destruct;
- (id)normalize:(id)a0;

@end
