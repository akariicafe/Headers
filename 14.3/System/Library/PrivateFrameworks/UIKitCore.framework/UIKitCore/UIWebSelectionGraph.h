@class NSMutableArray;

@interface UIWebSelectionGraph : NSObject {
    NSMutableArray *_selectionNodes;
}

- (id)init;
- (void)dealloc;
- (id)addNodeFromSelection:(id)a0;
- (void)exploreFromNode:(id)a0 outwards:(BOOL)a1 maxDepth:(int)a2;
- (void)exploreFromNode:(id)a0;
- (void)clearNodes;

@end
