@class PXAssetsDataSource, PXCMMContext, NSObject, PXCMMSendBackSuggestion, PHMomentShare;
@protocol OS_dispatch_queue;

@interface PXCMMSendBackSuggestionSource : PXObservable {
    NSObject<OS_dispatch_queue> *_fetchQueue;
    unsigned long long _sourceType;
    BOOL _hasInitiatedFetchRequest;
}

@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) PHMomentShare *originatingMomentShare;
@property (readonly, nonatomic) PXCMMSendBackSuggestion *suggestion;
@property (readonly, nonatomic) PXCMMContext *sendBackContext;
@property (readonly, nonatomic) BOOL shouldShowBanner;

+ (id)new;
+ (id)_assetsInDateRanges:(id)a0;
+ (id)sendBackContextTimeLocationMatching:(id)a0 sourceType:(unsigned long long)a1;
+ (id)sendBackContextOverlappingTimeFromStartDate:(id)a0 endDate:(id)a1 sourceType:(unsigned long long)a2;
+ (id)_sendBackFetchResultUsingOverlappingTimeFromStartDate:(id)a0 endDate:(id)a1;
+ (id)_sendBackFetchResultUsingTimeLocationMatching:(id)a0;
+ (id)_filterAssets:(id)a0 byLocations:(id)a1 maxDistanceMeters:(double)a2;

- (void)startLoading;
- (id)init;
- (void).cxx_destruct;
- (void)setSuggestion:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (id)initWithAssetsDataSource:(id)a0 sourceType:(unsigned long long)a1 originatingMomentShare:(id)a2;
- (BOOL)_existingOverlappingMomentSharesFromOwnerForAssetCollection:(id)a0;
- (id)_fetchSuggestedParticipantsForAssetCollection:(id)a0;
- (void)_fetchSuggestedSendBackContext;
- (void)_fetchQueue_fetchSuggestedSendBackContext;
- (void)setSendBackContext:(id)a0;
- (void)setShouldShowBanner:(BOOL)a0;
- (id)_allMetadataAssets;
- (id)_createSendBackContext;
- (id)sendBackContextPhotosGraphBasedWithSourceType:(unsigned long long)a0;
- (id)_sendBackFetchResultUsingPhotosGraph;

@end
