@interface FxTexture : FxImage <NSCopying> {
    struct FxTexturePriv { unsigned int x0; unsigned int x1; BOOL x2; } *_texturePriv;
}

- (void)enable;
- (void)draw;
- (id)init;
- (void)bind;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)disable;
- (unsigned int)target;
- (void)setData:(void *)a0;
- (void)setTarget:(unsigned int)a0;
- (BOOL)_verifyImage;
- (unsigned int)textureId;
- (id)initWithInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a0 textureId:(unsigned int)a1 andTarget:(unsigned int)a2;
- (BOOL)isInputImage;
- (void)setTextureId:(unsigned int)a0;
- (void)setIsInputImage:(BOOL)a0;
- (void *)createData:(unsigned int)a0 withType:(unsigned int)a1;
- (void)setAsActiveTexture;
- (void)getTextureCoords:(double *)a0 right:(double *)a1 bottom:(double *)a2 top:(double *)a3;

@end
