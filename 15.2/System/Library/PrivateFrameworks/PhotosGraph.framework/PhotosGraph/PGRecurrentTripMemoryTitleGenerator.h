@class NSSet;

@interface PGRecurrentTripMemoryTitleGenerator : PGTitleGenerator

@property (retain, nonatomic) NSSet *locationNodes;

- (id)_locationTitle;
- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)_timeTitle;
- (id)initWithLocationNodes:(id)a0 titleGenerationContext:(id)a1;

@end
