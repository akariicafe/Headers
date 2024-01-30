@interface PLTile : NSObject {
    struct __IOSurface { } *_decodedSurface;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageRect;
    id _tileId;
    BOOL _visible;
}

- (id)tileId;
- (void)setVisible:(BOOL)a0;
- (BOOL)visible;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRect;
- (void)setTileId:(id)a0;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDecodedSurface:(struct __IOSurface { } *)a0;
- (struct __IOSurface { } *)decodedSurface;

@end
