@class CLPlacemark, PKMapsMerchant, PKMapsBrand;

@interface PKMerchantLookupResponse : NSObject

@property (nonatomic) long long result;
@property (nonatomic) long long fallbackCategory;
@property (retain, nonatomic) PKMapsMerchant *merchant;
@property (retain, nonatomic) PKMapsBrand *brand;
@property (retain, nonatomic) CLPlacemark *placemark;

- (void).cxx_destruct;

@end
