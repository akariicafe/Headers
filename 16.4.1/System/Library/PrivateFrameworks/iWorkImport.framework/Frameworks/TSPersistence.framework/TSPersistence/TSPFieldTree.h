@class TSPFieldTreeNodeWithChildren;

@interface TSPFieldTree : NSObject {
    TSPFieldTreeNodeWithChildren *_rootNode;
}

- (BOOL)addField:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)saveToMessage:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0;

@end
