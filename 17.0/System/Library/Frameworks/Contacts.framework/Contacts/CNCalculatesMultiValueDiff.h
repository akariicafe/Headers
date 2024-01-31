@class NSArray, NSOrderedSet, NSMutableOrderedSet, NSMutableArray;

@interface CNCalculatesMultiValueDiff : NSObject {
    NSArray *_multiValue1;
    NSArray *_multiValue2;
    NSOrderedSet *_originalIdentifiers;
    NSOrderedSet *_finalIdentifiers;
    NSMutableOrderedSet *_addedIdentifiers;
    NSMutableOrderedSet *_removedIdentifiers;
    NSMutableOrderedSet *_sameIdentifiers;
    NSMutableOrderedSet *_calculatedFinalIdentifiers;
    NSMutableArray *_updates;
}

+ (id)diffMultiValue:(id)a0 toMultiValue:(id)a1;

- (void).cxx_destruct;
- (id)updates;
- (void)calculateDiff;
- (void)setupCalculatedFinalIdentifiers;
- (void)appendAddUpdates;
- (void)appendRemoveUpdates;
- (void)appendReorderUpdates;
- (void)appendReplaceUpdates;
- (id)initWithMultiValue1:(id)a0 multiValue2:(id)a1;
- (void)setupAddedIdentifiers;
- (void)setupFinalIdentifiers;
- (void)setupOriginalIdentifiers;
- (void)setupRemovedIdentifiers;
- (void)setupSameIdentifiers;

@end
