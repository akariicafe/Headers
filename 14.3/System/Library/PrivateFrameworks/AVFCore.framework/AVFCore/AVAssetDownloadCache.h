@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}

- (id)URL;
- (id)_asset;
- (void)dealloc;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (BOOL)isPlayableOffline;
- (id)initWithAsset:(id)a0;

@end
