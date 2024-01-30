@interface AXMCameraMetadataNode : AXMSourceNode

+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;
+ (id)title;

- (void)triggerWithCameraType:(long long)a0 cacheKey:(id)a1 resultHandler:(id /* block */)a2;

@end
