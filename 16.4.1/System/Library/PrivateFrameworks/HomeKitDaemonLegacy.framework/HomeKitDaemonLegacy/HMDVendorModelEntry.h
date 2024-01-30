@class NSString, HMDAccessoryVersion, NSArray;

@interface HMDVendorModelEntry : HMFObject

@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) NSString *appStoreID;
@property (readonly, nonatomic) HMDAccessoryVersion *firmwareVersion;
@property (readonly, nonatomic) NSString *productData;
@property (readonly, nonatomic) NSArray *productDataAlternates;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithManufacturer:(id)a0 model:(id)a1 appBundleID:(id)a2 appStoreID:(id)a3 firmwareVersion:(id)a4 productData:(id)a5 productDataAlternates:(id)a6;

@end
