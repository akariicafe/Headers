@class NSString, NSDictionary, NSURL, NSNumber;

@interface CHIPPluginVendorMetadataProduct : HMFObject <NSCopying, NSMutableCopying>

@property (copy) NSNumber *identifier;
@property (copy) NSNumber *categoryNumber;
@property (copy) NSString *name;
@property (copy) NSString *model;
@property (copy) NSURL *installationGuideURL;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)a0 dictionaryRepresentation:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 categoryNumber:(id)a1;

@end
