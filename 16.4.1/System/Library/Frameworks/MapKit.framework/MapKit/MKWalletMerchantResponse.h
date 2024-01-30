@class NSString, GEOPDMerchantLookupResult, MKMapItem, MKWalletMerchantStylingInfo;
@protocol GEOMapItem;

@interface MKWalletMerchantResponse : NSObject {
    id<GEOMapItem> _mapItem;
    GEOPDMerchantLookupResult *_merchantLookupResult;
}

@property (readonly, nonatomic) MKWalletMerchantStylingInfo *placeStyling;
@property (readonly, nonatomic) NSString *localizedPlaceName;
@property (readonly, nonatomic) NSString *localizedPlaceLanguage;
@property (readonly, nonatomic) MKWalletMerchantStylingInfo *walletCategoryStyling;
@property (readonly, nonatomic) NSString *localizedWalletCategoryName;
@property (readonly, nonatomic) NSString *localizedWalletCategoryLanguage;
@property (readonly, nonatomic) NSString *walletCategoryIdentifier;
@property (readonly, nonatomic) NSString *mapsCategoryIdentifier;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) NSString *heroImageProviderName;

- (void).cxx_destruct;
- (id)bestHeroImageForSize:(struct CGSize { double x0; double x1; })a0 allowSmaller:(BOOL)a1;
- (id)initWithGEOMapItem:(id)a0;
- (id)initWithMerchantLookupResult:(id)a0;

@end
