@class NSString, NSDictionary, NSURL;

@interface MPStoreOffer : NSObject {
    NSDictionary *_offerDictionary;
    MPStoreOffer *_regularPriceOffer;
    NSDictionary *_mediaAssetDictionary;
}

@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) unsigned long long entityPersistentID;
@property (readonly, copy, nonatomic) NSString *entityTitle;
@property (readonly, nonatomic) long long buyType;
@property (readonly, nonatomic) long long passType;
@property (readonly, copy, nonatomic) NSString *buyParameters;
@property (readonly, copy, nonatomic) NSString *displayTitle;
@property (readonly, copy, nonatomic) NSString *actionDisplayTitle;
@property (readonly, nonatomic) BOOL requiresConfirmation;
@property (readonly, copy, nonatomic) NSString *displayPrice;
@property (readonly, nonatomic) float price;
@property (readonly, copy, nonatomic) NSString *regularPriceDisplayPrice;
@property (readonly, nonatomic) unsigned long long downloadSize;
@property (readonly, copy, nonatomic) NSURL *previewURL;
@property (readonly, nonatomic) double previewDuration;

+ (long long)buyTypeForOfferDictionary:(id)a0 regularPriceOffer:(id)a1;
+ (id)_priceForOfferDictionary:(id)a0;
+ (id)offerVariantResponseKeyForOfferVariant:(long long)a0;
+ (long long)bestOfferVariantInOfferDictionaries:(id)a0 withPreferredVariant:(long long)a1;
+ (void)getBuyOfferDictionary:(id *)a0 regularPriceOfferDictionary:(id *)a1 inOfferDictionaries:(id)a2 variantString:(id)a3;
+ (void)getBuyOfferDictionary:(id *)a0 regularPriceOfferDictionary:(id *)a1 inOfferDictionaries:(id)a2 variant:(long long)a3;

- (BOOL)_isBuy;
- (id)buyURL;
- (void).cxx_destruct;
- (id)initWithStoreOfferDictionary:(id)a0 regularPriceOfferDictionary:(id)a1 passType:(long long)a2 entityType:(long long)a3 persistentID:(unsigned long long)a4 title:(id)a5;
- (id)storeOfferDictionary;

@end
