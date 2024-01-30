@interface AXMImageNode : AXMSourceNode

+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;

- (void)triggerWithImageURL:(id)a0 options:(id)a1 cacheKey:(id)a2 resultHandler:(id /* block */)a3;
- (void)triggerWithImage:(id)a0 options:(id)a1 cacheKey:(id)a2 resultHandler:(id /* block */)a3;
- (void)produceImage:(id)a0;
- (void)triggerWithPixelBuffer:(struct __CVBuffer { } *)a0 exifOrientation:(unsigned int)a1 options:(id)a2 cacheKey:(id)a3 resultHandler:(id /* block */)a4;

@end
