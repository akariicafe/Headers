@class MPStoreItemMetadata;

@interface MPStorePlatformMediaItem : MPNondurableMediaItem

@property (retain, nonatomic) MPStoreItemMetadata *storeItemMetadata;

+ (BOOL)supportsSecureCoding;
+ (id)defaultPropertyValues;

- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreItemMetadata:(id)a0;
- (id)_valueFromMetadataForProperty:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
