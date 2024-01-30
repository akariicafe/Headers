@class NSDateIntervalFormatter;

@interface PKDateComponentsRangeFormatter : NSObject

@property (retain, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter;

- (id)_formatForDateComponentsRange:(id)a0;
- (id)_currentDateComponents;
- (BOOL)_isSameDayInDateComponentsRange:(id)a0;
- (BOOL)_areHoursDefinedInDateComponentsRange:(id)a0;
- (BOOL)_isSameYearInDateComponentsRange:(id)a0 currentDateComponents:(id)a1;
- (long long)_resolvedEraFromEra:(long long)a0 currentEra:(long long)a1;
- (BOOL)_isSameEraInDateComponentsRange:(id)a0 currentDateComponents:(id)a1;
- (void).cxx_destruct;
- (id)stringFromDateComponentsRange:(id)a0;

@end
