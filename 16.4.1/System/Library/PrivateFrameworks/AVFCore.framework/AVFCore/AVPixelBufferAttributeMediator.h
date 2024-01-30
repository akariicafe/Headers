@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } *_mediator;
}

- (id)mediatedPixelBufferAttributes;
- (void)setRequestedPixelBufferAttributes:(id)a0 forKey:(id)a1;
- (void)setLayersAreSuppressed:(BOOL)a0;
- (void)dealloc;
- (id)init;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)a0;

@end
