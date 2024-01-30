@class NSArray;

@interface REMCRUndo : NSObject

@property (readonly, nonatomic) NSArray *undoBlocks;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUndoBlocks:(id)a0;

@end
