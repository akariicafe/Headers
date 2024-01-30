@class AVStreamDataAssetInspector, AVStreamDataParser, AVDispatchOnce, NSArray, NSDictionary, AVAssetSynchronousInspectorLoader;

@interface AVStreamDataAsset : AVAsset {
    AVStreamDataParser *_weakReferenceToParser;
    AVStreamDataAssetInspector *_inspector;
    AVAssetSynchronousInspectorLoader *_inspectorLoader;
    AVDispatchOnce *_tracksOnce;
    NSArray *_tracks;
    NSDictionary *_trackDictsByTrackID;
}

- (Class)_classForTrackInspectors;
- (id)_assetInspectorLoader;
- (id)tracks;
- (id)_assetInspector;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (void).cxx_destruct;
- (id)copyAssetWithReplacementFormatDescription:(struct opaqueCMFormatDescription { } *)a0 forTrackID:(int)a1;
- (id)copyAssetWithAdditionalTrackID:(int)a0 mediaType:(id)a1;
- (id)copyAssetRemovingTrackID:(int)a0;
- (id)formatDescriptionsForTrackID:(int)a0;
- (id)mediaTypeForTrackID:(int)a0;
- (id)initWithParser:(id)a0 tracks:(id)a1;
- (id)parser;
- (void)dealloc;

@end
