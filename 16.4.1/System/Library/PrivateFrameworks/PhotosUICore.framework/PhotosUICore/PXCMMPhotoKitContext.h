@class PXCMMPhotoKitActionManager, PHMomentShare, PHSuggestion;

@interface PXCMMPhotoKitContext : PXCMMContext {
    PXCMMPhotoKitActionManager *_photoKitActionManager;
}

@property (readonly, nonatomic) PHMomentShare *momentShare;
@property (readonly, nonatomic) PHSuggestion *suggestion;
@property (retain, nonatomic) PHMomentShare *originatingMomentShare;

- (id)actionManager;
- (void).cxx_destruct;
- (id)createSession;
- (id)initWithMomentShare:(id)a0 activityType:(unsigned long long)a1 sourceType:(unsigned long long)a2;
- (id)initWithAssetCollection:(id)a0 activityType:(unsigned long long)a1 sourceType:(unsigned long long)a2;
- (id)initWithAssetCollection:(id)a0 activityType:(unsigned long long)a1 sourceType:(unsigned long long)a2 optionalPeopleFetchResult:(id)a3;
- (id)initWithAssets:(id)a0 activityType:(unsigned long long)a1 sourceType:(unsigned long long)a2;
- (id)initWithAssetsDataSourceManager:(id)a0 mediaProvider:(id)a1 activityType:(unsigned long long)a2;
- (id)initWithFetchResult:(id)a0 activityType:(unsigned long long)a1 sourceType:(unsigned long long)a2;
- (id)initWithFetchResult:(id)a0 activityType:(unsigned long long)a1 sourceType:(unsigned long long)a2 optionalPeopleFetchResult:(id)a3;
- (id)initWithFetchResult:(id)a0 library:(id)a1 activityType:(unsigned long long)a2 sourceType:(unsigned long long)a3 optionalPeopleFetchResult:(id)a4;
- (id)initWithSuggestion:(id)a0 activityType:(unsigned long long)a1 sourceType:(unsigned long long)a2 optionalPeopleFetchResult:(id)a3;

@end
