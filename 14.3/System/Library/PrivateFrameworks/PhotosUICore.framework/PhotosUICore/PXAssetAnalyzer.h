@class NSMutableDictionary;

@interface PXAssetAnalyzer : NSObject {
    NSMutableDictionary *_analyzerUUIDToRequest;
}

- (id)init;
- (void).cxx_destruct;
- (void)_handleResultForRequest:(id)a0 success:(BOOL)a1;
- (id)_keyForAssetUUID:(id)a0 forWorkerType:(long long)a1;
- (BOOL)canAnalyzeAsset:(id)a0 forWorkerType:(long long)a1;
- (void)analyzeAsset:(id)a0 forWorkerType:(long long)a1;

@end
