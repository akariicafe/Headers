@class NSIndexSet;

@interface _MFTableViewModelDiff : NSObject

@property (retain, nonatomic) NSIndexSet *changedRows;
@property (retain, nonatomic) NSIndexSet *deletedRows;
@property (retain, nonatomic) NSIndexSet *insertedRows;

- (void).cxx_destruct;

@end
