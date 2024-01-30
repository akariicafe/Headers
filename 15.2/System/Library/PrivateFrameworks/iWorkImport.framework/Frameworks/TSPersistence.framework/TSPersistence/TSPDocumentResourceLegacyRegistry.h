@class NSURL, NSDictionary;

@interface TSPDocumentResourceLegacyRegistry : NSObject {
    NSDictionary *_metadataDictionary;
}

@property (class, copy, nonatomic) NSURL *sharedSageRegistryMetadataURL;
@property (class, copy, nonatomic) NSURL *sharedTangierRegistryMetadataURL;

@property (readonly) NSDictionary *metadataDictionary;

+ (id)sharedSageRegistry;
+ (id)sharedTangierRegistry;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMetadataDictionary:(id)a0;
- (id)documentResourceLegacyInfoForApplicationRelativePath:(id)a0;
- (id)initWithMetadataURL:(id)a0;
- (id)metadataDictionaryKeyForRelativePath:(id)a0;

@end
