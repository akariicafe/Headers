@class NSDictionary;

@interface PKMerchantCategoryCodeMap : NSObject {
    NSDictionary *_mccCodeToMerchantCategory;
}

- (id)init;
- (void).cxx_destruct;
- (long long)categoryForIndustryCode:(long long)a0;

@end
