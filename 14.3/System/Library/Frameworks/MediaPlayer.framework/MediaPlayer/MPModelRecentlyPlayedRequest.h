@interface MPModelRecentlyPlayedRequest : MPStoreModelRequest

+ (id)allSupportedSectionProperties;
+ (BOOL)supportsSecureCoding;
+ (id)allSupportedItemProperties;

- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
