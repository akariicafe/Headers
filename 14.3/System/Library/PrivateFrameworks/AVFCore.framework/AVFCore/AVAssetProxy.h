@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)a0;
+ (id)makePropertyListForMovieProxyHeader:(id)a0 name:(id)a1;

- (BOOL)isProxy;
- (struct OpaqueFigAsset { } *)_figAsset;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)tracks;
- (void)dealloc;
- (id)initWithPropertyList:(id)a0;
- (Class)_classForTrackInspectors;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;

@end
