@class NSArray, MPMediaItemCollection, MPStoreOfferContentRating, MPStoreCompletionOfferResponse, MPMediaQuery;

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection {
    MPStoreCompletionOfferResponse *_storeOfferResponse;
    NSArray *_unmergedStoreMediaItems;
    MPMediaQuery *_localItemsQuery;
    MPMediaItemCollection *_localCollection;
    BOOL _hasHiddenRestrictedContent;
    long long _preferredStoreOfferVariant;
    MPStoreOfferContentRating *_collectionContentRating;
}

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *itemsByRemovingStoreOffers;
@property (readonly, nonatomic) NSArray *itemsByRemovingLocalItems;
@property (readonly, nonatomic) BOOL isCollectionOfferPresentable;

+ (BOOL)supportsSecureCoding;
+ (id)collectionLookupKeyForMediaProperty:(id)a0;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)a0 mediaProperty:(id)a1;
+ (id)contentRatingForCollectionPropertyValues:(id)a0;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)a0;
+ (long long)offerPassTypeForLookupCollectionPropertyValues:(id)a0;
+ (id)albumOrderedChildItemIDsForLookupCollectionPropertyValues:(id)a0;
+ (id)defaultPropertyValues;

- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)preferredStoreOfferVariant;
- (BOOL)_offeredItemAlreadyExists;
- (id)buyOfferForVariant:(long long)a0;
- (id)_lookupOfferDictionaries;
- (BOOL)_checkIsUsableOffer;
- (id)initWithStoreOfferResponse:(id)a0 preferredStoreOfferVariant:(long long)a1 offerMediaItems:(id)a2 localItemsQuery:(id)a3;
- (id)initWithStoreOfferResponse:(id)a0 preferredStoreOfferVariant:(long long)a1;
- (long long)countOfItemsByRemovingLocalItems;
- (id)copyByOverlayingMediaItemsWithItemsQuery:(id)a0 preferredStoreOfferVariant:(long long)a1;
- (BOOL)isCheaperToPurchaseIndividualItems;
- (BOOL)_hasRestrictedContent;
- (BOOL)hasDownloadableStoreOfferItemsForVariant:(long long)a0;
- (void)_loadLocalCollection;
- (BOOL)hasPurchasableStoreOfferItemsForVariant:(long long)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isDownloadable;
- (id)description;
- (id)valuesForProperties:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)persistentID;
- (id)mediaLibrary;
- (id)title;
- (void)encodeWithCoder:(id)a0;

@end
