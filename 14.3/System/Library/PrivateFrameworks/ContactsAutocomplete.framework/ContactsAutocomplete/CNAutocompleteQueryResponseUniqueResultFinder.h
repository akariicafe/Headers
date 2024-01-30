@class NSIndexSet, NSDictionary, NSMutableIndexSet, NSMutableArray;

@interface CNAutocompleteQueryResponseUniqueResultFinder : NSObject {
    NSMutableArray *_uniqueResults;
    NSMutableArray *_hashes;
    NSDictionary *_hashIndex;
    NSIndexSet *_firstIndexes;
    NSMutableIndexSet *_uniqueResultIndexes;
    id /* block */ _duplicateResultHandler;
}

+ (id)findUniqueResults:(id)a0 duplicateResultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)removeDuplicateResults;
- (id)initWithResults:(id)a0 duplicateResultHandler:(id /* block */)a1;
- (id)findUniqueResults;
- (void)generateHashes;
- (void)indexHashes;
- (void)resolveDuplicatesWithinIndexes:(id)a0;

@end
