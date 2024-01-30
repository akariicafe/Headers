@class NSIndexSet, NSOrderedSet;

@interface NSOrderedSetIndexer : NSObject

@property (retain, nonatomic) NSIndexSet *insertedIndexesAfterDeletions;
@property (retain, nonatomic) NSIndexSet *deletedIndexesBeforeInsertions;
@property (retain, nonatomic) NSOrderedSet *initialOrderedSet;
@property (retain, nonatomic) NSOrderedSet *finalOrderedSet;

+ (id)indexerWithInitialSet:(id)a0 finalSet:(id)a1;

- (void).cxx_destruct;
- (void)analyze;
- (id)initWithInitialSet:(id)a0 finalSet:(id)a1;

@end
