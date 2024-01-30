@class PGGraphNode;

@interface PGPlaceMemoryTitleGenerator : PGTitleGenerator

@property (retain, nonatomic) PGGraphNode *placeNode;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)_placeTitle;
- (id)initWithMomentNodes:(id)a0 placeNode:(id)a1 titleGenerationContext:(id)a2;

@end
