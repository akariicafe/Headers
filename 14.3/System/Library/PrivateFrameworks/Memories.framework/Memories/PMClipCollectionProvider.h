@class NSString, VEKProduction, VEKResult, NSMutableSet, NSMutableArray;
@protocol PMClipCollectionProviderDelegate, VEKProjectProtocol, PMEditProviderDelegate;

@interface PMClipCollectionProvider : NSObject <PMEditProviderProtocol, PMRelatedClipsDelegate>

@property (readonly, nonatomic) VEKProduction *production;
@property (readonly, nonatomic) NSMutableArray *assetClipProviders;
@property (retain, nonatomic) id<VEKProjectProtocol> project;
@property (retain, nonatomic) VEKResult *result;
@property (nonatomic) double currentDuration;
@property (retain, nonatomic) NSMutableArray *assetClipProviders;
@property (retain, nonatomic) NSMutableSet *projectAssets;
@property (nonatomic) BOOL shouldCancel;
@property (weak, nonatomic) id<PMClipCollectionProviderDelegate> clipCollectionDelegate;
@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id<PMEditProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfItems;
- (struct CGSize { double x0; double x1; })naturalSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateWithResult:(id)a0;
- (void)triggerEdit;
- (BOOL)clipIsPartOfSplit:(id)a0;
- (BOOL)clipIsPartOfMultiUp:(id)a0;
- (id)initWithProduction:(id)a0;
- (id)clipProvidersForAsset:(id)a0;
- (id)suggestionsForAsset:(id)a0;
- (id)initWithResult:(id)a0 production:(id)a1;
- (unsigned long long)clipProviderIndexForSequenceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)clipProviderAtIndex:(unsigned long long)a0;
- (id)suggestedAssets;
- (id)currentProductionAssetIDs;
- (void)removeClipAtIndex:(unsigned long long)a0;
- (id)indexesForClipProvidersOfAssetID:(id)a0;
- (id)currentProductionAssets;
- (void)updateClipProvidersForAssets:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)updateWithResult:(id)a0 error:(id)a1;
- (id)allAssetsIncludingAllMomentsAssets:(BOOL)a0;
- (void)removeSuggestionsForAsset:(id)a0;
- (void)updateSuggestionsForAddedAsset:(id)a0;
- (id)clipSuggestionsForAsset:(id)a0;
- (id)assetSetFromProject:(id)a0;
- (void)validateRangeSuggestionMatching;
- (id)_otherSplitClipsForClip:(id)a0;
- (BOOL)assetIsPartOfMultiUp:(id)a0;
- (BOOL)assetHasUserModifiedAudioLevel:(id)a0;

@end
