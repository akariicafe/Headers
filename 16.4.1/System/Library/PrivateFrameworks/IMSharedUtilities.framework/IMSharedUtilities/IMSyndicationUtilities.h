@class CKContainer, NSObject;
@protocol OS_dispatch_queue;

@interface IMSyndicationUtilities : NSObject

@property (retain, nonatomic) CKContainer *ckContainer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *attributionFetchQueue;

- (id)init;
- (void).cxx_destruct;
- (id)bundleIDsForCollaborationURL:(id)a0;
- (id)bundleIDsForShareBearURL:(id)a0;
- (id)UTITypeForURL:(id)a0;
- (id)_URLSchemeForCollaborationApp:(unsigned long long)a0;
- (id)_bundleIDsForCollaborationApp:(unsigned long long)a0;
- (unsigned long long)_collaborationAppForURL:(id)a0;
- (id)_fetchCKBundleIDsForURL:(id)a0 returnLocalBundlesOnly:(BOOL)a1;
- (void)fetchAttributionsForHighlight:(id)a0 highlight:(id)a1 completionBlock:(id /* block */)a2;

@end
