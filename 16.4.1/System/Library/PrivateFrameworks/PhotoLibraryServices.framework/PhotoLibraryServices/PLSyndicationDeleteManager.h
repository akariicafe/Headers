@class NSString, NSObject;
@protocol OS_dispatch_queue, PLSyndicationDeleteManagerDelegate;

@interface PLSyndicationDeleteManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    long long _wellKnownPhotoLibraryIdentifier;
}

@property (readonly, weak, nonatomic) id<PLSyndicationDeleteManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *logPrefix;

- (id)initWithLibraryServicesManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)_deleteConversationWithBundleID:(id)a0 syndicationIdentifiers:(id)a1;
- (BOOL)_deleteSyndicationAssetsWithBundleID:(id)a0 syndicationIdentifiers:(id)a1 deleteCount:(long long *)a2;
- (void)_inqueueProcessDeletesForBundleID:(id)a0 identifiers:(id)a1;
- (BOOL)_processDeletesForBundleID:(id)a0 unprefixedIdentifiers:(id)a1;
- (id)initWithDelegate:(id)a0 path:(id)a1 logPrefix:(id)a2;
- (void)processDeletesForBundleID:(id)a0 identifiers:(id)a1 completion:(id /* block */)a2;

@end
