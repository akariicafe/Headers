@class NSString, NSArray;

@interface PKPaymentSetupBrowseProductsModel : NSObject {
    NSArray *_products;
    NSArray *_likelyFilteredProducts;
    NSArray *_unlikelyFilteredProducts;
}

@property (copy, nonatomic) NSString *filterString;
@property (nonatomic) unsigned long long filterType;
@property (copy, nonatomic) NSArray *likelyProductIdentifiers;
@property (readonly, copy, nonatomic) NSArray *likelyProducts;
@property (readonly, copy, nonatomic) NSArray *unlikelyProducts;
@property (readonly, copy, nonatomic) NSArray *unifiedProducts;

- (void).cxx_destruct;
- (void)_updatedFilteredProducts;
- (unsigned long long)numberOfLikelyProducts;
- (unsigned long long)numberOfUnlikelyProducts;
- (id)initWithProducts:(id)a0;
- (unsigned long long)unfilteredCountForType:(unsigned long long)a0;
- (id)likelyProductAtIndex:(unsigned long long)a0;
- (id)unlikelyProductAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfUnifiedProducts;
- (id)unifiedProductAtIndex:(unsigned long long)a0;

@end
