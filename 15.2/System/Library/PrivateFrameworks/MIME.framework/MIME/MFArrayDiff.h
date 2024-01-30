@class NSIndexSet;

@interface MFArrayDiff : NSObject

@property (retain, nonatomic) NSIndexSet *commonIndexes;
@property (retain, nonatomic) NSIndexSet *addedIndexes;
@property (retain, nonatomic) NSIndexSet *removedIndexes;

- (void).cxx_destruct;
- (id)debugDescription;

@end
