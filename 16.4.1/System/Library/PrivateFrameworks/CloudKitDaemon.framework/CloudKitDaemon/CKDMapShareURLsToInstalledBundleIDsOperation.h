@class NSMutableArray, NSMutableDictionary;
@protocol CKMapShareURLsToInstalledBundleIDsOperationCallbacks;

@interface CKDMapShareURLsToInstalledBundleIDsOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *shareURLs;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasByURL;
@property (retain, nonatomic) id<CKMapShareURLsToInstalledBundleIDsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ bundleIDsFetchedBlock;

- (void)_finishOnCallbackQueueWithError:(id)a0;
- (int)operationType;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)nameForState:(unsigned long long)a0;
- (void)main;
- (void).cxx_destruct;
- (void)_fetchRegisteredBundleIDs;
- (void)_fetchShareMetadata;
- (void)_performCallbackForURL:(id)a0 withAppBundleIDs:(id)a1 daemonBundleIDs:(id)a2 error:(id)a3;

@end
