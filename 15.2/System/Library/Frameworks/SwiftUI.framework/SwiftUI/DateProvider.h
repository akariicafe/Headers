@class NSString, NSDateFormatter, NSArray, NSDate;

@interface DateProvider : BaseDateProvider {
    NSArray *_templateSeries;
}

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long calendarUnits;
@property (nonatomic) BOOL uppercase;
@property (copy, nonatomic) NSString *dateFormat;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;

- (id)initWithDate:(id)a0 units:(unsigned long long)a1;
- (id)initWithDateFormat:(id)a0 calendar:(id)a1 locale:(id)a2 timeZone:(id)a3;
- (id)_sessionTextForIndex:(long long)a0;
- (id)updateInterval;
- (id)_partialDateTemplateSeriesForUnits:(unsigned long long)a0;
- (id)_completeDateTemplateSeries;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 units:(unsigned long long)a1 calendar:(id)a2 locale:(id)a3 timeZone:(id)a4;

@end
