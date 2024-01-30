@class NSIndexSet, NSArray;

@interface CRKOrderedOneToManyKVOAccumulatorResults : NSObject

@property (retain, nonatomic) NSIndexSet *insertions;
@property (retain, nonatomic) NSIndexSet *deletions;
@property (retain, nonatomic) NSIndexSet *replacements;
@property (retain, nonatomic) NSArray *moves;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) long long netCountChange;

- (id)description;
- (void).cxx_destruct;
- (id)resultsByExcludingLocalDeletions:(id)a0;

@end
