@class NSDictionary;

@interface TSPDocumentResourceRegistry : NSObject {
    NSDictionary *_metadataDictionary;
}

@property (readonly) NSDictionary *metadataDictionary;

+ (id)sharedRegistry;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMetadataDictionary:(id)a0;
- (id)documentResourceInfosForTags:(id)a0;
- (id)documentResourceInfoForDigestString:(id)a0 locator:(id)a1;
- (id)localStrategyProviderForDocumentResourceInfos:(id)a0;
- (id)initWithMetadataURL:(id)a0;

@end
