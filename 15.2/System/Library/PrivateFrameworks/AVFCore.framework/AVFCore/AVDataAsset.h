@class AVDispatchOnce, NSDictionary, AVAssetInspectorLoader, NSArray;

@interface AVDataAsset : AVAsset {
    NSDictionary *_initializationOptions;
    AVAssetInspectorLoader *_loader;
    AVDispatchOnce *_allocateTracksOnceOnly;
    NSArray *_tracks;
}

+ (id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)a0 figAssetCreationFlags:(unsigned long long *)a1;
+ (unsigned long long)_dataLengthLimit;

- (Class)_classForTrackInspectors;
- (id)_assetInspectorLoader;
- (id)tracks;
- (id)_assetInspector;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)initWithData:(id)a0 contentType:(id)a1;
- (BOOL)_requiresInProcessOperation;
- (id)initWithData:(id)a0 contentType:(id)a1 options:(id)a2;
- (unsigned long long)referenceRestrictions;
- (void)dealloc;

@end
