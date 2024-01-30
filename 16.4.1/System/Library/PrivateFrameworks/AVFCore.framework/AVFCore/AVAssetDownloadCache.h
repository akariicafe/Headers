@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}

- (id)initWithAsset:(id)a0;
- (id)URL;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (void)dealloc;
- (id)_asset;
- (BOOL)isPlayableOffline;

@end
