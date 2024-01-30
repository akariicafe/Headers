@class NSManagedObjectContext, NSMutableArray;

@interface PLLibraryContentsEnumerator : NSObject {
    NSMutableArray *_assetHandlerBlocks;
    NSMutableArray *_resourceHandlerBlocks;
    NSMutableArray *_conversationHandlerBlocks;
    NSMutableArray *_faceHandlerBlocks;
    NSMutableArray *_endOfListHandlerBlocks;
}

@property (readonly, nonatomic) NSManagedObjectContext *sourceContext;
@property (readonly, nonatomic) BOOL concurrent;

- (void)addResourceVisitor:(id /* block */)a0;
- (void)addFaceVisitor:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_setupAssetResourceFaceController;
- (id)_setupConversationController;
- (void)addConversationVisitor:(id /* block */)a0;
- (BOOL)processObjectsWithError:(id *)a0;
- (void)addEndOfListVisitor:(id /* block */)a0;
- (id)initWithSourceManagedObjectContext:(id)a0 concurrent:(BOOL)a1;
- (void)addAssetVisitor:(id /* block */)a0;

@end
