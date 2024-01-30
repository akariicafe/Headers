@interface VCPixelBufferOverlay : VCObject {
    struct CGContext { } *_bitmapContext;
    struct __CFDictionary { } *_stringAttributes;
    struct __CTLine { } *_ellipsisToken;
}

- (void)dealloc;
- (void)drawOverlayMessage:(id)a0 onPixelBuffer:(struct __CVBuffer { } *)a1 attributes:(struct __CFDictionary { } *)a2;
- (void)setupStringAttributes:(double)a0 height:(double)a1;
- (id)reverseString:(id)a0;

@end
