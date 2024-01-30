@class MPStoreOfferMediaItemArtworkDescriptor, NSDictionary, MPStoreOfferContentRating, NSNumber;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSSecureCoding, NSCopying> {
    NSDictionary *_lookupCollectionPropertyValues;
    NSNumber *_itemID;
    long long _preferredStoreOfferVariant;
    MPStoreOfferContentRating *_contentRating;
    MPStoreOfferMediaItemArtworkDescriptor *_offerArtworkDescriptor;
    long long _offerArtworkDescriptorOnceToken;
    id _pid;
    id _discNumber;
    id _trackNumber;
    id _title;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)canMergeStoreOfferWithLocalMediaItems:(id)a0;
+ (id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)a0 preferredStoreOfferVariant:(long long)a1;
+ (BOOL)canRequestStoreOfferForLocalMediaItems:(id)a0;
+ (id)mediaItemsByMergingStoreOfferMediaItems:(id)a0 localItems:(id)a1;
+ (id)mediaItemsByRemovingRestrictedContentFromMediaItems:(id)a0;
+ (id)collectionLookupKeyForMediaProperty:(id)a0;
+ (id)itemLookupKeyForMediaProperty:(id)a0;
+ (id)offerLookupKeyForItemMediaProperty:(id)a0;
+ (id)preferredAssetDictionaryInOfferDictionary:(id)a0;
+ (id)assetLookupKeyForItemMediaProperty:(id)a0;
+ (id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)a0;
+ (id)localRepresentativeItemPropertyForMediaProperty:(id)a0;
+ (id)contentRatingForCollectionPropertyValues:(id)a0 itemID:(id)a1;
+ (BOOL)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)a0 itemID:(id)a1;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)a0 itemID:(id)a1 mediaProperty:(id)a2;
+ (id)offerArtworkDescriptorForLookupCollectionPropertyValues:(id)a0 itemID:(id)a1;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)a0 itemID:(id)a1;
+ (BOOL)canFilterByProperty:(id)a0;
+ (id)defaultPropertyValues;

- (id)valueForProperty:(id)a0;
- (unsigned long long)discNumber;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)preferredStoreOfferVariant;
- (BOOL)_offeredItemAlreadyExists;
- (id)offerArtworkDescriptor;
- (id)initWithLookupLookupCollectionPropertyValues:(id)a0 preferredStoreOfferVariant:(long long)a1 itemID:(id)a2;
- (id)buyOfferForVariant:(long long)a0;
- (id)_lookupOfferDictionaries;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isDownloadable;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)persistentID;
- (unsigned long long)albumTrackNumber;
- (id)mediaLibrary;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)title;
- (id)screenshotArtworkCatalog;
- (void)encodeWithCoder:(id)a0;

@end
