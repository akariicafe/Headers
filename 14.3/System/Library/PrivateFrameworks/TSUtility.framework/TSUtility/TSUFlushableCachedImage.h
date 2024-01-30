@interface TSUFlushableCachedImage : TSUFlushableObject {
    struct CGImage { } *_image;
    id _delegate;
    SEL _delegateCreateImageSelector;
}

- (void)dealloc;
- (void)unload;
- (struct CGImage { } *)newImage;
- (id)initWithDelegate:(id)a0 createImageSelector:(SEL)a1;
- (BOOL)hasFlushableContent;

@end
