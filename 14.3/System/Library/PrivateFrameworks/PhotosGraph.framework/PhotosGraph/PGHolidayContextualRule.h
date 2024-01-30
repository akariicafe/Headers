@class NSString, PGGraph, PGGraphHolidayNode;

@interface PGHolidayContextualRule : NSObject <PGContextualRule> {
    PGGraph *_graph;
    PGGraphHolidayNode *_holidayNode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (BOOL)canProvideContextualKeyAssetsWithOptions:(id)a0;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)a0 withOptions:(id)a1 modelReader:(id)a2 usingBlock:(id /* block */)a3;
- (id)highlightNodeMatchingYearHighlight:(id)a0 withOptions:(id)a1;

@end
