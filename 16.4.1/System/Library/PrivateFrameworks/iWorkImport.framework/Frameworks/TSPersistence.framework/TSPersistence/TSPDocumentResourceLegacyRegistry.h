@class NSURL, NSDictionary;

@interface TSPDocumentResourceLegacyRegistry : NSObject {
    NSDictionary *_metadataDictionary;
}

@property (class, copy, nonatomic) NSURL *sharedSageRegistryMetadataURL;
@property (class, copy, nonatomic) NSURL *sharedTangierRegistryMetadataURL;

@property (readonly) NSDictionary *metadataDictionary;

+ (id)sharedSageRegistry;
+ (id)sharedTangierRegistry;

- (id)initWithMetadataDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)documentResourceLegacyInfoForApplicationRelativePath:(id)a0;
- (id)initWithMetadataURL:(id)a0;
- (id)metadataDictionaryKeyForRelativePath:(id)a0;

@end
