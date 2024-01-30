@interface PXGMetalRenderTextureStore : NSObject {
    struct { id x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; float x2; int x3; unsigned char x4; } *_textures;
    long long _count;
    long long _capacity;
    BOOL _sorted;
}

- (void)_sortIfNeeded;
- (void)addTexture:(struct { id x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; float x2; int x3; unsigned char x4; })a0;
- (id)init;
- (void)drawWithOrder:(unsigned long long)a0 enumerationBlock:(id /* block */)a1;
- (void)dealloc;
- (void)removeAllTextures;

@end
