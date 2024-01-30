@class AVStreamDataAssetInspector, AVStreamDataParser, AVDispatchOnce, NSArray, NSDictionary, AVAssetSynchronousInspectorLoader;

@interface AVStreamDataAsset : AVAsset {
    AVStreamDataParser *_weakReferenceToParser;
    AVStreamDataAssetInspector *_inspector;
    AVAssetSynchronousInspectorLoader *_inspectorLoader;
    AVDispatchOnce *_tracksOnce;
    NSArray *_tracks;
    NSDictionary *_trackDictsByTrackID;
}

- (struct OpaqueFigFormatReader { } *)_formatReader;
- (void).cxx_destruct;
- (id)tracks;
- (void)dealloc;
- (Class)_classForTrackInspectors;
- (id)parser;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (id)copyAssetRemovingTrackID:(int)a0;
- (id)copyAssetWithReplacementFormatDescription:(struct opaqueCMFormatDescription { } *)a0 forTrackID:(int)a1;
- (id)copyAssetWithAdditionalTrackID:(int)a0 mediaType:(id)a1;
- (id)formatDescriptionsForTrackID:(int)a0;
- (id)initWithParser:(id)a0 tracks:(id)a1;
- (id)mediaTypeForTrackID:(int)a0;

@end
