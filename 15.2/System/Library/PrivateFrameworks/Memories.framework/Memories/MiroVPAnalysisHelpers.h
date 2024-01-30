@class NSCache;

@interface MiroVPAnalysisHelpers : VEiOSSharedObject {
    NSCache *_analysisInfos;
}

+ (void)clearStaticCache;
+ (id)sharedHelpers;
+ (void)purgeSharedInstance;
+ (unsigned long long)_extendedFlagsWithFlags:(unsigned long long)a0;
+ (int)_timeInFramesWithDictionaryRepresentation:(id)a0 naturalFrameRate:(long long)a1;
+ (id)_createAnalysisInfoWithVPResultDictionary:(id)a0 asset:(id)a1;

- (void)clearCaches;
- (void).cxx_destruct;
- (id)init;
- (int)fetchAnalysisInfoWithAssets:(id)a0 completionHandler:(id /* block */)a1;
- (void)processResults:(id)a0 forAssets:(id)a1 intoInfos:(id)a2;
- (int)fetchAnalysisInfoWithAsset:(id)a0 completionHandler:(id /* block */)a1;

@end
