@interface TSDBitmapRenderingQualityImageMapValue : NSObject {
    struct CGImage { } *mDegradedImageRef;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } maxSize;

- (void)dealloc;
- (void)addSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)degradedImageRefForForProvider:(id)a0 quality:(int)a1 canvasScale:(float)a2;
- (struct CGImage { } *)getDegradedImageRefFromProvider:(id)a0 quality:(int)a1 canvasScale:(float)a2;

@end
