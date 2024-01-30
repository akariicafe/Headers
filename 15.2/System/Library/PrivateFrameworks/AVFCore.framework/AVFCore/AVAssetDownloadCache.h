@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}

- (id)initWithAsset:(id)a0;
- (BOOL)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (id)URL;
- (void)dealloc;
- (id)_asset;

@end
