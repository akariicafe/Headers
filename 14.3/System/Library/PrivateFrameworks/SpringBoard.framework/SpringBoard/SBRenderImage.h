@interface SBRenderImage : NSObject {
    struct _CARenderImage { } *_image;
}

- (void)dealloc;
- (void *)CA_copyRenderValue;
- (id)initWithRenderImage:(struct _CARenderImage { } *)a0;

@end
