@class MPStoreOfferMediaItemCollection, MPStoreCollectionCompletionOffering, NSURL, MPStoreCompletionOfferResponse, MPMediaQuery;

@interface MPStoreCompletionOffering : NSObject <NSCopying> {
    long long _preferredStoreOfferVariant;
    MPStoreCompletionOfferResponse *_storeOfferResponse;
    MPMediaQuery *_localItemsQuery;
    MPStoreCollectionCompletionOffering *_collectionWithCompletionItemsOffering;
}

@property (nonatomic) long long preferredStoreOfferVariant;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, copy, nonatomic) NSURL *storeURL;
@property (readonly, nonatomic) MPStoreOfferMediaItemCollection *collectionWithCompletionItems;

+ (void)setDefaultOfferVariant:(long long)a0;
+ (long long)defaultOfferVariant;
+ (id)offeringWithResponse:(id)a0 localItemsQuery:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResponse:(id)a0 localItemsQuery:(id)a1;
- (id)copyByInvalidatingCalculatedContent;
- (void)_loadOfferingData;

@end
