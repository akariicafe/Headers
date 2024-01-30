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

- (id)initWithDate:(id)a0 units:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_partialDateTemplateSeriesForUnits:(unsigned long long)a0;
- (id)_completeDateTemplateSeries;
- (BOOL)_validate;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)JSONObjectRepresentation;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)initWithDate:(id)a0 units:(unsigned long long)a1 timeZone:(id)a2;

@end
