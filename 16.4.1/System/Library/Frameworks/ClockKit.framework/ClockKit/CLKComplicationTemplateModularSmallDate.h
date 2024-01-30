@class CLKDateTextProvider;

@interface CLKComplicationTemplateModularSmallDate : CLKComplicationTemplate

@property (copy, nonatomic) CLKDateTextProvider *weekdayTextProvider;
@property (copy, nonatomic) CLKDateTextProvider *dayTextProvider;
@property (nonatomic) unsigned long long highlightMode;

+ (id)templateWithWeekdayTextProvider:(id)a0 dayTextProvider:(id)a1;

- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)a0;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (BOOL)highlightLine2;
- (id)initPrivateWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;
- (id)initWithWeekdayTextProvider:(id)a0 dayTextProvider:(id)a1;
- (void)setHighlightLine2:(BOOL)a0;

@end
