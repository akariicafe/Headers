@class NSArray;

@interface REMCRUndo : NSObject

@property (readonly, nonatomic) NSArray *undoBlocks;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUndoBlocks:(id)a0;

@end
