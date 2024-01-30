@class NSArray;

@interface ICRadioFetchMetadataResponse : ICRadioResponse

@property (readonly, copy, nonatomic) NSArray *allStorePlatformMetadata;

- (id)storePlatformMetadataForStoreAdamID:(long long)a0;
- (id)_storePlatformMetadataDictionaryFromRadioMetadataDictionary:(id)a0;

@end
