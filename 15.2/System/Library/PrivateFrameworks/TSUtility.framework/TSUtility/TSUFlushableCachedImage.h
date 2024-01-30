@interface TSUFlushableCachedImage : TSUFlushableObject {
    struct CGImage { } *_image;
    id _delegate;
    SEL _delegateCreateImageSelector;
}

- (void)unload;
- (void)dealloc;
- (struct CGImage { } *)newImage;
- (id)initWithDelegate:(id)a0 createImageSelector:(SEL)a1;
- (BOOL)hasFlushableContent;

@end
