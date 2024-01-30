@class NSIndexSet, NSOrderedSet;

@interface NSOrderedSetIndexer : NSObject

@property (retain, nonatomic) NSIndexSet *insertedIndexesAfterDeletions;
@property (retain, nonatomic) NSIndexSet *deletedIndexesBeforeInsertions;
@property (retain, nonatomic) NSOrderedSet *initialOrderedSet;
@property (retain, nonatomic) NSOrderedSet *finalOrderedSet;

+ (id)indexerWithInitialSet:(id)a0 finalSet:(id)a1;

- (void)analyze;
- (void).cxx_destruct;
- (id)initWithInitialSet:(id)a0 finalSet:(id)a1;

@end
