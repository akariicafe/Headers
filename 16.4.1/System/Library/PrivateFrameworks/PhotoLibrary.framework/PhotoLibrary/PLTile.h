@interface PLTile : NSObject {
    struct __IOSurface { } *_decodedSurface;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageRect;
    id _tileId;
    BOOL _visible;
}

- (BOOL)visible;
- (void)setVisible:(BOOL)a0;
- (void)dealloc;
- (void)setTileId:(id)a0;
- (id)tileId;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRect;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct __IOSurface { } *)decodedSurface;
- (void)setDecodedSurface:(struct __IOSurface { } *)a0;

@end
