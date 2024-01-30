@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)a0;
+ (id)makePropertyListForMovieProxyHeader:(id)a0 name:(id)a1;

- (struct OpaqueFigAsset { } *)_figAsset;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (Class)_classForTrackInspectors;
- (id)initWithPropertyList:(id)a0;
- (void)dealloc;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)tracks;
- (BOOL)isProxy;
- (id)_assetInspector;
- (id)_assetInspectorLoader;

@end
