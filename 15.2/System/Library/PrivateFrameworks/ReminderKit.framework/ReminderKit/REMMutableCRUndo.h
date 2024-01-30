@class NSMutableArray;

@interface REMMutableCRUndo : NSObject

@property (readonly, nonatomic) NSMutableArray *undoBlocks;

- (void).cxx_destruct;
- (id)init;
- (id)immutableCopy;
- (void)addUndoBlock:(id /* block */)a0;

@end
