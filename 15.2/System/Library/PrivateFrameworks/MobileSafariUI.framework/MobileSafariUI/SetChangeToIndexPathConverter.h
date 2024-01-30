@class NSMutableArray;

@interface SetChangeToIndexPathConverter : NSObject {
    NSMutableArray *_indexPathsToDelete;
    NSMutableArray *_indexPathsToInsert;
    NSMutableArray *_indexPathsToReload;
    NSMutableArray *_indexPathsToMove;
    NSMutableArray *_deleteInsertPairsToTreatAsMoves;
}

- (void).cxx_destruct;
- (id)init;

@end
