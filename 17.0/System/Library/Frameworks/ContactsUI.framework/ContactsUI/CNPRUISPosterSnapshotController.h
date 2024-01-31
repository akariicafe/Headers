@interface CNPRUISPosterSnapshotController : NSObject

- (id)sharedController;
- (void)acquireKeepActiveAssertionForReason:(id)a0;
- (void)executeSnapshotRequest:(id)a0 completion:(id /* block */)a1;
- (id)latestSnapshotBundleForRequest:(id)a0 error:(out id *)a1;
- (void)releaseKeepActiveAssertionForReason:(id)a0;

@end
