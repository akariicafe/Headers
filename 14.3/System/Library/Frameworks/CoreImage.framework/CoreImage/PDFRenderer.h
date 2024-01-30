@interface PDFRenderer : CGRenderer {
    struct __CFDictionary { } *info;
    struct __CFData { } *data;
    struct CGDataConsumer { } *dataConsumer;
}

- (void)setFileURL:(id)a0;
- (id)init;
- (BOOL)setCanvasWidth:(unsigned int)a0 height:(unsigned int)a1;
- (const struct __CFData { } *)pdfdata;
- (void)setFileTitle:(id)a0;
- (void)flushRender;
- (void)dealloc;

@end
