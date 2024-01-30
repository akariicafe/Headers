@interface PVRenderedTexture : NSObject {
    struct HGRef<HGGLTexture> { struct HGGLTexture *m_Obj; } _glTexture;
}

@property (readonly, nonatomic) unsigned int textureName;
@property (readonly, nonatomic) unsigned int textureTarget;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textureRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bitmapRect;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithHGGLTexture:(struct HGRef<HGGLTexture> { struct HGGLTexture *x0; })a0;
- (struct CGSize { double x0; double x1; })textureSize;

@end
