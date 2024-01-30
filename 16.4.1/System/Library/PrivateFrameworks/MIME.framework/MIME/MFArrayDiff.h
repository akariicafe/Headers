@class NSIndexSet;

@interface MFArrayDiff : NSObject

@property (retain, nonatomic) NSIndexSet *commonIndexes;
@property (retain, nonatomic) NSIndexSet *addedIndexes;
@property (retain, nonatomic) NSIndexSet *removedIndexes;

- (id)debugDescription;
- (void).cxx_destruct;

@end
