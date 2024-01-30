@class PGGraphLocationNode, NSDateInterval;

@interface PGPastSupersetMemoryTitleGenerator : PGTitleGenerator

@property (readonly) PGGraphLocationNode *supersetLocationNode;
@property (readonly) NSDateInterval *supersetDateInterval;

- (void).cxx_destruct;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNodes:(id)a0 supersetLocationNode:(id)a1 supersetDateInterval:(id)a2;
- (id)_timeTitle;

@end
