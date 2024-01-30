@class PGGraph;

@interface PGGraphEnabler : NSObject

@property (readonly) PGGraph *graph;

- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (BOOL)locationIsFrequent:(id)a0;
- (BOOL)locationIsNearMyHomeOrWork:(id)a0;

@end
