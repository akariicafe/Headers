@class CKMapShareURLsToInstalledBundleIDsOperationInfo, NSMutableDictionary, NSArray, NSMutableArray;
@protocol CKMapShareURLsToInstalledBundleIDsOperationCallbacks;

@interface CKMapShareURLsToInstalledBundleIDsOperation : CKOperation <CKMapShareURLsToInstalledBundleIDsOperationCallbacks>

@property (retain, nonatomic) NSMutableArray *specialURLs;
@property (retain, nonatomic) NSMutableArray *genericURLs;
@property (retain, nonatomic) NSMutableDictionary *errorsByURL;
@property (nonatomic) BOOL returnLocalBundlesOnly;
@property (readonly, nonatomic) id<CKMapShareURLsToInstalledBundleIDsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKMapShareURLsToInstalledBundleIDsOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *shareURLs;
@property (copy, nonatomic) id /* block */ perShareURLBlock;
@property (copy, nonatomic) id /* block */ mapBundleIDsCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)performCKOperation;
- (void)ckSignpostBegin;
- (id)init;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void).cxx_destruct;
- (id)getStaticBundleIDsForURLSlug:(id)a0 withKey:(id)a1;
- (void)handleBundleIDsFetchedForURL:(id)a0 appBundleIDs:(id)a1 daemonBundleIDs:(id)a2 error:(id)a3;
- (id)initWithShareURLs:(id)a0 returnLocalBundlesOnly:(BOOL)a1;
- (id)selectLocalBundleIDs:(id)a0;

@end
