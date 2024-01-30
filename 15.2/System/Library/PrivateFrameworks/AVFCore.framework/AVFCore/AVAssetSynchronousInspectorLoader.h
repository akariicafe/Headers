@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
}

- (id)lyrics;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (id)assetInspector;
- (BOOL)isComposable;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAssetInspector:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
