@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)a0;
+ (id)makePropertyListForMovieProxyHeader:(id)a0 name:(id)a1;

- (Class)_classForTrackInspectors;
- (id)_assetInspectorLoader;
- (id)tracks;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)_assetInspector;
- (struct OpaqueFigAsset { } *)_figAsset;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)initWithPropertyList:(id)a0;
- (BOOL)isProxy;
- (void)dealloc;

@end
