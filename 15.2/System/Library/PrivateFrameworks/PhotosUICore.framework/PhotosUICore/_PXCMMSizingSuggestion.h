@class NSString, PXAssetCollectionActionManager;
@protocol PXUIImageProvider, PXPeopleFetchResult, PXDisplayAsset;

@interface _PXCMMSizingSuggestion : NSObject <PXCMMSuggestion>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) id<PXDisplayAsset> posterAsset;
@property (readonly, nonatomic) id<PXUIImageProvider> posterMediaProvider;
@property (readonly, nonatomic) id<PXPeopleFetchResult> peopleFetchResult;
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long aggregateMediaType;

- (void)decline;
- (void).cxx_destruct;
- (id)init;
- (double)scoreForSuggestionMatchingType:(long long)a0;
- (id)contextForActivityType:(unsigned long long)a0 sourceType:(unsigned long long)a1;
- (void)markAsActiveIfNeeded;
- (id)diagnosticsItem;
- (void)registerMatchingType:(long long)a0;

@end
