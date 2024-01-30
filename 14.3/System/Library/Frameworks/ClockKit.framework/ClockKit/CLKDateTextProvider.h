@class NSTimeZone, NSString, NSDateFormatter, NSArray, NSDate;

@interface CLKDateTextProvider : CLKTextProvider {
    NSDateFormatter *_dateFormatter;
    NSArray *_templateSeries;
}

@property (nonatomic) BOOL shortUnits;
@property (nonatomic) BOOL allowsNarrowUnits;
@property (nonatomic) BOOL narrowStandaloneWeekdayDay;
@property (copy, nonatomic) NSString *alternateCalendarLocaleID;
@property (nonatomic) long long formattingContext;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long calendarUnits;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) BOOL uppercase;

+ (BOOL)supportsSecureCoding;
+ (id)textProviderWithDate:(id)a0 units:(unsigned long long)a1;
+ (id)textProviderWithDate:(id)a0 units:(unsigned long long)a1 timeZone:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)_validate;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDate:(id)a0 units:(unsigned long long)a1;
- (id)_completeDateTemplateSeries;
- (id)_partialDateTemplateSeriesForUnits:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)initWithDate:(id)a0 units:(unsigned long long)a1 timeZone:(id)a2;

@end
