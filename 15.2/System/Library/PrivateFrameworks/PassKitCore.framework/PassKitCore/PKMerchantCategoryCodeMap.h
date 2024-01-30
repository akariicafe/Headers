@class NSDictionary;

@interface PKMerchantCategoryCodeMap : NSObject {
    NSDictionary *_mccCodeToMerchantCategory;
}

- (void).cxx_destruct;
- (id)init;
- (long long)categoryForIndustryCode:(long long)a0;

@end
