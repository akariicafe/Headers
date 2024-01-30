@interface AXMAssetMetadataNode : AXMSourceNode

+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;

- (void)triggerWithAssetURL:(id)a0 cacheKey:(id)a1 resultHandler:(id /* block */)a2;

@end
