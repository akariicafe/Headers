@interface UISSlotEmptyContent : NSObject {
    struct CGSize { double width; double height; } _contentSize;
}

+ (id)contentWithSize:(struct CGSize { double x0; double x1; })a0;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned char)contentScale;
- (BOOL)isRemote;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)image;
- (void)deleteFromLayerContext:(id)a0;
- (BOOL)shouldReplaceExistingContent;

@end
