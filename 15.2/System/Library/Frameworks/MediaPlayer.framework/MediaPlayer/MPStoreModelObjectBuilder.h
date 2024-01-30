@class MPPropertySet;

@interface MPStoreModelObjectBuilder : NSObject

@property (readonly, nonatomic) MPPropertySet *requestedPropertySet;
@property (nonatomic) BOOL preventStoreItemMetadataCaching;

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)a0;
- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1;
- (id)modelObjectWithStorePlatformDictionary:(id)a0;
- (id)modelObjectWithStoreItemMetadata:(id)a0 userIdentity:(id)a1;
- (id)modelObjectWithStorePlatformDictionary:(id)a0 userIdentity:(id)a1;
- (id)initWithRequestedPropertySet:(id)a0;
- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
