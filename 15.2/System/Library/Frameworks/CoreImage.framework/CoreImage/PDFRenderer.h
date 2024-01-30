@interface PDFRenderer : CGRenderer {
    struct __CFDictionary { } *info;
    struct __CFData { } *data;
    struct CGDataConsumer { } *dataConsumer;
}

- (void)setFileURL:(id)a0;
- (const struct __CFData { } *)pdfdata;
- (BOOL)setCanvasWidth:(unsigned int)a0 height:(unsigned int)a1;
- (void)setFileTitle:(id)a0;
- (void)flushRender;
- (id)init;
- (void)dealloc;

@end
