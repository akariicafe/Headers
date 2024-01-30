@class CLKDateTextProvider;

@interface CLKComplicationTemplateExtraLargeDate : CLKComplicationTemplate

@property (copy, nonatomic) CLKDateTextProvider *weekdayTextProvider;
@property (copy, nonatomic) CLKDateTextProvider *dayTextProvider;
@property (nonatomic) unsigned long long highlightMode;

+ (id)templateWithWeekdayTextProvider:(id)a0 dayTextProvider:(id)a1;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (void)setHighlightLine2:(BOOL)a0;
- (BOOL)highlightLine2;
- (id)initWithWeekdayTextProvider:(id)a0 dayTextProvider:(id)a1;

@end
