@class PGGraphAreaNodeCollection, PGGraphLocationNodeCollection;

@interface PGTripMemoryTitleGenerator : PGTitleGenerator {
    PGGraphLocationNodeCollection *_locationNodes;
    PGGraphAreaNodeCollection *_areaNodes;
}

@property (readonly, nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)_typeString;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)_timeTitleForTrip;
- (id)_timeTitleForTripAndWeekend;
- (id)_timeTitleForWeekend;
- (BOOL)_triggerDefaultTitleGenerationIfNil;
- (id)initWithHighlightNode:(id)a0 titleGenerationContext:(id)a1;
- (id)initWithMomentNodes:(id)a0 locationNodes:(id)a1 areaNodes:(id)a2 type:(unsigned long long)a3 titleGenerationContext:(id)a4;
- (id)initWithMomentNodes:(id)a0 locationNodes:(id)a1 type:(unsigned long long)a2 titleGenerationContext:(id)a3;
- (id)initWithMomentNodes:(id)a0 type:(unsigned long long)a1 titleGenerationContext:(id)a2;

@end
