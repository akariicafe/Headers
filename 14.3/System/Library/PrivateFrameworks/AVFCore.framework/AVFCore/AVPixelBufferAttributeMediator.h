@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } *_mediator;
}

- (id)init;
- (void)setRequestedPixelBufferAttributes:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)a0;
- (void)setLayersAreSuppressed:(BOOL)a0;
- (id)mediatedPixelBufferAttributes;

@end
