@interface TSUFlushableCachedImage : TSUFlushableObject {
    struct CGImage { } *_image;
    id _delegate;
    SEL _delegateCreateImageSelector;
}

- (void)dealloc;
- (void)unload;
- (BOOL)hasFlushableContent;
- (id)initWithDelegate:(id)a0 createImageSelector:(SEL)a1;
- (struct CGImage { } *)newImage;

@end
