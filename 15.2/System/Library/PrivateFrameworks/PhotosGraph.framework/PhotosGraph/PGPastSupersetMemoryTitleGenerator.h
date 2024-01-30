@class PGGraphLocationNode, NSDateInterval;

@interface PGPastSupersetMemoryTitleGenerator : PGTitleGenerator

@property (readonly) PGGraphLocationNode *supersetLocationNode;
@property (readonly) NSDateInterval *supersetDateInterval;

- (id)_locationTitle;
- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNodes:(id)a0 supersetLocationNode:(id)a1 supersetDateInterval:(id)a2 titleGenerationContext:(id)a3;
- (id)_timeTitle;

@end
