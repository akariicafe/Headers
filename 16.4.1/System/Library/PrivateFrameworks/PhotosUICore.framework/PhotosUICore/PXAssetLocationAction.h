@class NSString, NSDictionary;

@interface PXAssetLocationAction : PXAssetsAction {
    NSDictionary *_originalLocations;
}

@property (readonly, nonatomic) NSString *analyticsActionString;
@property (readonly, nonatomic) NSString *analyticsPlaceLevelString;
@property (copy, nonatomic) id /* block */ onUnitChange;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_loadOriginalLocationsIfNeeded;
- (void)_performChangesWithLocationProvider:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_requestRevGeocoding;
- (void)_sendAnalyticsEvent;
- (id)_undoLocationForAsset:(id)a0;
- (id)locationForAsset:(id)a0 shifted:(BOOL *)a1;
- (void)performUndo:(id /* block */)a0;

@end
