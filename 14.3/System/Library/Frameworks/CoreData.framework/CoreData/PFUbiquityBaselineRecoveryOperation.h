@class NSObject;
@protocol PFUbiquityBaselineRecoveryOperationDelegate;

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *delegate;

- (void)main;
- (id)retainedDelegate;
- (BOOL)isEqual:(id)a0;
- (BOOL)conflictsExistForBaseline:(id)a0;
- (BOOL)electBaselineURLFromVersions:(id)a0 withBaseline:(id)a1 error:(id *)a2;
- (BOOL)hasCurrentBaseline;
- (BOOL)resolveConflictsForBaseline:(id)a0 withError:(id *)a1;
- (BOOL)shouldReplaceLocalStoreWithBaseline:(id)a0;
- (BOOL)replaceLocalStoreWithBaseline:(id)a0 error:(id *)a1;
- (id)electAncestorBaselineForConflictedBaselines:(id)a0 dissentingBaselines:(id *)a1;

@end
