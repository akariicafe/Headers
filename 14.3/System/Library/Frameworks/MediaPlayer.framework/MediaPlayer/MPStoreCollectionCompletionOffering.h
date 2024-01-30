@class NSArray, MPMediaQuery, MPStoreOfferMediaItemCollection;

@interface MPStoreCollectionCompletionOffering : NSObject {
    MPMediaQuery *_localItemsQuery;
}

@property (readonly, nonatomic) long long preferredStoreOfferVariant;
@property (readonly, nonatomic) MPStoreOfferMediaItemCollection *offeredCollection;
@property (readonly, nonatomic) MPStoreOfferMediaItemCollection *mergedCollection;
@property (readonly, nonatomic) MPStoreOfferMediaItemCollection *itemsWithCompletionsCollection;
@property (readonly, nonatomic) NSArray *localItems;

- (void).cxx_destruct;
- (id)initWithOfferedCollection:(id)a0 localItemsQuery:(id)a1 preferredStoreOfferVariant:(long long)a2;

@end
