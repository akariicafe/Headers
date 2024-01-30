@class TSPFieldTreeNodeWithChildren;

@interface TSPFieldTree : NSObject {
    TSPFieldTreeNodeWithChildren *_rootNode;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)addField:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)saveToMessage:(struct Message { void /* function */ **x0; } *)a0;

@end
