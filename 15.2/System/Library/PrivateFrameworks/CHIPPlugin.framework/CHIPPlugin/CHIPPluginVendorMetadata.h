@class NSDictionary, NSNumber, NSSet;

@interface CHIPPluginVendorMetadata : HMFObject <NSCopying, NSMutableCopying>

@property (copy) NSDictionary *vendorsByVendorID;
@property (readonly, copy) NSNumber *version;
@property (readonly, copy) NSNumber *schemaVersion;
@property (readonly, copy) NSSet *vendors;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (id)attributeDescriptions;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)vendorWithID:(id)a0;
- (id)initWithVersion:(id)a0 schemaVersion:(id)a1;

@end
