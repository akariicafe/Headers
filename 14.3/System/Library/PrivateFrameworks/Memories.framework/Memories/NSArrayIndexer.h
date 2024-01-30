@class NSIndexSet, NSArray;

@interface NSArrayIndexer : NSObject

@property (retain, nonatomic) NSIndexSet *insertedIndexesAfterDeletions;
@property (retain, nonatomic) NSIndexSet *deletedIndexesBeforeInsertions;
@property (retain, nonatomic) NSArray *initialArray;
@property (retain, nonatomic) NSArray *finalArray;

+ (id)indexerWithInitialArray:(id)a0 finalArray:(id)a1;

- (void).cxx_destruct;
- (void)analyze;
- (id)initWithInitialArray:(id)a0 finalArray:(id)a1;

@end
