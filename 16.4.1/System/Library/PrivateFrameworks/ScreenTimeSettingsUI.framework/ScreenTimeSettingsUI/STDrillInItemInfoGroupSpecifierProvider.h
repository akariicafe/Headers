@class STUsageItem, PSSpecifier;

@interface STDrillInItemInfoGroupSpecifierProvider : STGroupSpecifierProvider

@property (readonly, nonatomic) STUsageItem *usageItem;
@property (readonly, nonatomic) PSSpecifier *appIconSpecifier;
@property (readonly, nonatomic) PSSpecifier *ageRatingSpecifier;
@property (readonly, nonatomic) PSSpecifier *developerSpecifier;

- (void).cxx_destruct;
- (void)_didFetchAppInfo:(id)a0;
- (id)ageRating:(id)a0;
- (id)category:(id)a0;
- (id)developer:(id)a0;
- (id)initWithUsageItem:(id)a0;
- (id)usageItem:(id)a0;

@end
