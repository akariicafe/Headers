@class PSSearchEntry;
@protocol PSSearchIndexOperationDelegate;

@interface PSSearchIndexOperation : NSOperation

@property (readonly, nonatomic) PSSearchEntry *searchEntry;
@property (weak) id<PSSearchIndexOperationDelegate> delegate;

+ (id)_bundleForSearchEntry:(id)a0 thirdPartyApp:(BOOL *)a1;
+ (id)_loadSearchEntriesFromPlistForEntry:(id)a0 bundle:(id)a1;
+ (id)_loadThirdPartySearchEntriesForEntry:(id)a0 bundle:(id)a1;
+ (id)possibleBundleRoots;
+ (void)setPossibleBundleRoots:(id)a0;
+ (void)setTopLevelManifestBundlePath:(id)a0;
+ (id)topLevelManifestBundlePath;

- (void)_cancel;
- (void)main;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_finishedIndexingWithEntries:(id)a0 cancelled:(BOOL)a1;
- (id)initWithSearchEntry:(id)a0 delegate:(id)a1;

@end
