@class NSString, NSDictionary, NSSet, NSNumber;

@interface CHIPPluginVendorMetadataVendor : HMFObject

@property (copy) NSNumber *identifier;
@property (copy) NSDictionary *productsByProductID;
@property (copy) NSString *name;
@property (copy) NSString *appStoreID;
@property (copy) NSString *appBundleID;
@property (readonly, copy) NSSet *products;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (id)initWithIdentifier:(id)a0;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)a0 dictionaryRepresentation:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)productWithID:(id)a0;

@end
