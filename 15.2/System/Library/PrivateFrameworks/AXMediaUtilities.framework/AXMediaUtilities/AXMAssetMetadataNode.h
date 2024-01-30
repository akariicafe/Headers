@interface AXMAssetMetadataNode : AXMSourceNode

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (void)triggerWithAssetURL:(id)a0 cacheKey:(id)a1 resultHandler:(id /* block */)a2;

@end
