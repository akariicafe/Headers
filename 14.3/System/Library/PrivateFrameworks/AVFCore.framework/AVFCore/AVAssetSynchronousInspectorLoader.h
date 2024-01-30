@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
}

- (id)lyrics;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)initWithAssetInspector:(id)a0;
- (BOOL)isReadable;
- (unsigned long long)hash;
- (BOOL)isComposable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isEqual:(id)a0;
- (BOOL)isExportable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isPlayable;
- (id)assetInspector;

@end
