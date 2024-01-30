@class NSArray;

@interface PLUnintendedChangeChecker : NSObject {
    NSArray *_unexpectedMomentAssetKeys;
    NSArray *_unexpectedMomentAdditionalAssetAttributeKeys;
    NSArray *_unexpectedCPLAssetKeys;
}

+ (void)checkForUnintendedChangesDuringeSave:(id)a0 withBlock:(id /* block */)a1;
+ (void)checkForUnintendedChangeOnMergeConflicts:(id)a0 withBlock:(id /* block */)a1;
+ (BOOL)shouldCheckForUnintendedChanges;

- (void)checkForUnintendedChangesDuringeSave:(id)a0 withBlock:(id /* block */)a1;
- (void)checkForUnintendedChangeOnMergeConflicts:(id)a0 withBlock:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_checkForUnintendedCPLChangesOnObject:(id)a0 withBlock:(id /* block */)a1;
- (void)_checkForUnintendedChangesOnObject:(id)a0 withBlock:(id /* block */)a1;
- (void)_checkForUnintendedChangesOnObject:(id)a0 withEntity:(id)a1 unexpectedKeys:(id)a2 block:(id /* block */)a3;
- (void)_checkForUnintendedMomentChangesOnObject:(id)a0 withBlock:(id /* block */)a1;

@end
