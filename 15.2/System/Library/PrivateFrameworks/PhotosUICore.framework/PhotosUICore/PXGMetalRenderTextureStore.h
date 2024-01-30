@interface PXGMetalRenderTextureStore : NSObject {
    struct { id x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; int x4; unsigned char x5; BOOL x6; } *_textures;
    long long _count;
    long long _capacity;
    BOOL _sorted;
}

- (void)addTexture:(struct { id x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; int x4; unsigned char x5; BOOL x6; })a0;
- (void)removeAllTextures;
- (id)init;
- (void)drawWithOrder:(unsigned long long)a0 enumerationBlock:(id /* block */)a1;
- (void)dealloc;
- (void)_sortIfNeeded;

@end
