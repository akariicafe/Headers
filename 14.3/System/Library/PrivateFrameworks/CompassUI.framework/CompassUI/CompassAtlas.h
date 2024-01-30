@class CompassAtlasManifest;

@interface CompassAtlas : NSObject {
    unsigned int _texName;
    CompassAtlasManifest *_manifest;
    struct CGSize { double width; double height; } _size;
}

- (void).cxx_destruct;
- (void)bind;
- (void)dealloc;
- (id)initWithImageData:(char *)a0 manifest:(id)a1;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; })metadataForImageNamed:(id)a0;

@end
