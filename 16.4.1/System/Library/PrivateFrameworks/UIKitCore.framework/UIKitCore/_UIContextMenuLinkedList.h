@class NSMutableArray, _UIContextMenuNode;

@interface _UIContextMenuLinkedList : NSObject

@property (readonly, nonatomic) NSMutableArray *nodes;
@property (readonly, nonatomic) _UIContextMenuNode *first;
@property (readonly, nonatomic) _UIContextMenuNode *current;

- (id)removeNode:(id)a0;
- (void)addNode:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)popNode;
- (void)enumerateNodes:(id /* block */)a0;
- (void)_enumerateNodes:(id /* block */)a0 inReverse:(BOOL)a1;
- (id)nodeForMenu:(id)a0;
- (void)reverseEnumerateNodes:(id /* block */)a0;

@end
