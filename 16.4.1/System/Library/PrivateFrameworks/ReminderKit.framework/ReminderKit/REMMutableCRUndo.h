@class NSMutableArray;

@interface REMMutableCRUndo : NSObject

@property (readonly, nonatomic) NSMutableArray *undoBlocks;

- (id)immutableCopy;
- (id)init;
- (void).cxx_destruct;
- (void)addUndoBlock:(id /* block */)a0;

@end
