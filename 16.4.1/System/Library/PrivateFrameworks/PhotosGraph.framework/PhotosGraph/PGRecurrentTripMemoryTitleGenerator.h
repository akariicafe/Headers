@class NSSet;

@interface PGRecurrentTripMemoryTitleGenerator : PGTitleGenerator

@property (retain, nonatomic) NSSet *locationNodes;

- (void).cxx_destruct;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)_timeTitle;
- (id)initWithLocationNodes:(id)a0 titleGenerationContext:(id)a1;

@end
