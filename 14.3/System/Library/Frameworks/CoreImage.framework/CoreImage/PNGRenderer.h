@interface PNGRenderer : CGRenderer {
    struct __CFURL { } *fullURL;
    struct CGColor { } *background;
    struct CGColorSpace { } *colorSpace;
}

- (void)setFileURL:(id)a0;
- (id)init;
- (BOOL)setCanvasWidth:(unsigned int)a0 height:(unsigned int)a1;
- (void)flushRender;
- (void)dealloc;
- (struct CGImage { } *)cgimage;

@end
