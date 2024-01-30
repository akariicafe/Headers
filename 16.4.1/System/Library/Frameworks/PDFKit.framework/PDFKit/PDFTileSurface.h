@interface PDFTileSurface : NSObject {
    int tileId;
    int pageNumber;
    int tileSize;
    int type;
    struct __IOSurface { } *ioSurfaceRef;
    struct CGImage { } *cgImageRef;
}

- (void)releaseSurface;

@end
