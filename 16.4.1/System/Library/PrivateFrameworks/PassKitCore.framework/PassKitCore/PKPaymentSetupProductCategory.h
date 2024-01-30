@class PKPaymentSetupProductImageAssetURLs, NSString, NSSet, PKPaymentSetupProductImageAssets;

@interface PKPaymentSetupProductCategory : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (copy, nonatomic) NSSet *regions;
@property (nonatomic) unsigned long long excludedContexts;
@property (nonatomic) unsigned long long capabilities;
@property (retain, nonatomic) PKPaymentSetupProductImageAssetURLs *imageAssetURLs;
@property (retain, nonatomic) PKPaymentSetupProductImageAssets *imageAssets;
@property (copy, nonatomic) NSSet *productIdentifiers;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;
@property (readonly, copy, nonatomic) NSString *localizedSearchBarDefaultText;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)needsProducts;

@end
