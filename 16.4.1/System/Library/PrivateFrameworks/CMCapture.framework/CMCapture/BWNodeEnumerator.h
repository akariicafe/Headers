@class BWGraph, NSMutableDictionary;

@interface BWNodeEnumerator : NSEnumerator {
    BWGraph *_graph;
    unsigned long long _depth;
    NSMutableDictionary *_nodeVisitCountMap;
}

+ (void)initialize;

- (id)initWithGraph:(id)a0;
- (void)dealloc;

@end
