@class NSDictionary;

@interface TSPDocumentResourceLegacyRegistry : NSObject {
    NSDictionary *_metadataDictionary;
}

@property (readonly) NSDictionary *metadataDictionary;

+ (id)sharedSageRegistry;
+ (id)sharedTangierRegistry;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMetadataDictionary:(id)a0;
- (id)documentResourceLegacyInfoForApplicationRelativePath:(id)a0;
- (id)initWithMetadataURL:(id)a0;
- (id)metadataDictionaryKeyForRelativePath:(id)a0;

@end
