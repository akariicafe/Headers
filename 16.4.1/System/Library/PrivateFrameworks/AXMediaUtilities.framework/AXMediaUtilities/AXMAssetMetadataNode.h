@interface AXMAssetMetadataNode : AXMSourceNode

+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;
+ (id)title;

- (void)triggerWithAssetURL:(id)a0 cacheKey:(id)a1 resultHandler:(id /* block */)a2;

@end
