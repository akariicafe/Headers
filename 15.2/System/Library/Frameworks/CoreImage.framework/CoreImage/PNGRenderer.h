@interface PNGRenderer : CGRenderer {
    struct __CFURL { } *fullURL;
    struct CGColor { } *background;
    struct CGColorSpace { } *colorSpace;
}

- (void)setFileURL:(id)a0;
- (struct CGImage { } *)cgimage;
- (BOOL)setCanvasWidth:(unsigned int)a0 height:(unsigned int)a1;
- (void)flushRender;
- (id)init;
- (void)dealloc;

@end
