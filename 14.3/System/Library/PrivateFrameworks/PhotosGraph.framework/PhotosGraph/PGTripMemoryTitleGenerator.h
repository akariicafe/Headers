@interface PGTripMemoryTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) unsigned long long type;

- (id)_typeString;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNodes:(id)a0 type:(unsigned long long)a1;
- (id)initWithHighlightNode:(id)a0;
- (id)_timeTitleForTrip;
- (id)_timeTitleForWeekend;
- (id)_timeTitleForTripAndWeekend;
- (BOOL)_triggerDefaultTitleGenerationIfNil;

@end
