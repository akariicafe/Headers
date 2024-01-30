@class AVDispatchOnce, NSDictionary, AVAssetInspectorLoader, NSArray;

@interface AVDataAsset : AVAsset {
    NSDictionary *_initializationOptions;
    AVAssetInspectorLoader *_loader;
    AVDispatchOnce *_allocateTracksOnceOnly;
    NSArray *_tracks;
}

+ (unsigned long long)_dataLengthLimit;
+ (id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)a0 figAssetCreationFlags:(unsigned long long *)a1;

- (id)initWithData:(id)a0 contentType:(id)a1;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)tracks;
- (void)dealloc;
- (Class)_classForTrackInspectors;
- (id)initWithData:(id)a0 contentType:(id)a1 options:(id)a2;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (unsigned long long)referenceRestrictions;
- (BOOL)_requiresInProcessOperation;

@end
