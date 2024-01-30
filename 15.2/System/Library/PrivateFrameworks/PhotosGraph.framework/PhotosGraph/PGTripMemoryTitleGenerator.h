@class PGGraphLocationNodeCollection;

@interface PGTripMemoryTitleGenerator : PGTitleGenerator {
    PGGraphLocationNodeCollection *_locationNodes;
}

@property (readonly, nonatomic) unsigned long long type;

- (id)_typeString;
- (id)_locationTitle;
- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNodes:(id)a0 type:(unsigned long long)a1 titleGenerationContext:(id)a2;
- (id)initWithMomentNodes:(id)a0 locationNodes:(id)a1 type:(unsigned long long)a2 titleGenerationContext:(id)a3;
- (id)initWithHighlightNode:(id)a0 titleGenerationContext:(id)a1;
- (id)_timeTitleForTrip;
- (id)_timeTitleForWeekend;
- (id)_timeTitleForTripAndWeekend;
- (BOOL)_triggerDefaultTitleGenerationIfNil;

@end
