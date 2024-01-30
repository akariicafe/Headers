@interface BLDownloadQueue : BLDownloadQueueNonUI

+ (id)sharedInstance;

- (void)setAutomaticDownloadEnabled:(BOOL)a0 uiManager:(id)a1 withCompletion:(id /* block */)a2;
- (void)purchaseWithRequest:(id)a0 uiManager:(id)a1 completion:(id /* block */)a2;
- (void)addDownloadsWithManifestRequest:(id)a0 uiManager:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void)purchaseWithRequest:(id)a0 completion:(id /* block */)a1;

@end
