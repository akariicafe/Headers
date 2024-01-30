@interface SFUIActivityImageProvider : SFUIImageProvider

- (int)requestImageForActivity:(id)a0 contentSizeCategory:(id)a1 imageSymbolConfiguration:(id)a2 synchronous:(BOOL)a3 resultHandler:(id /* block */)a4;
- (int)requestImageForBundleIdentifier:(id)a0 activityCategory:(long long)a1 contentSizeCategory:(id)a2 synchronous:(BOOL)a3 resultHandler:(id /* block */)a4;
- (id)_fetchActionImageForActivity:(id)a0 contentSizeCategory:(id)a1 imageSymbolConfiguration:(id)a2;
- (void)_fetchBundleImageForBundleIdentifier:(id)a0 activityCategory:(long long)a1 contentSizeCategory:(id)a2;
- (void)_fetchImageForActivity:(id)a0 contentSizeCategory:(id)a1 imageSymbolConfiguration:(id)a2;
- (void)_handleIconImage:(id)a0 bundleIdentifier:(id)a1 activityCategory:(long long)a2 contentSizeCategory:(id)a3 placeholder:(BOOL)a4;
- (void)performImageRequest:(id)a0;
- (int)requestImageForActivity:(id)a0 contentSizeCategory:(id)a1 imageSymbolConfiguration:(id)a2 resultHandler:(id /* block */)a3;
- (int)requestImageForBundleIdentifier:(id)a0 activityCategory:(long long)a1 contentSizeCategory:(id)a2 resultHandler:(id /* block */)a3;

@end
