@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } *_mediator;
}

- (void)setLayersAreSuppressed:(BOOL)a0;
- (id)mediatedPixelBufferAttributes;
- (id)init;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)a0;
- (void)dealloc;
- (void)setRequestedPixelBufferAttributes:(id)a0 forKey:(id)a1;

@end
