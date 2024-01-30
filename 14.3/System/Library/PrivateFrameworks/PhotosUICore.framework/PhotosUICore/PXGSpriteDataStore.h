@class NSString;

@interface PXGSpriteDataStore : NSObject <PXGDiagnosticsProvider> {
    unsigned int _capacity;
}

@property (nonatomic) unsigned int count;
@property (readonly, nonatomic) struct { struct { double x0; double x1; float x2; } x0; } *geometries;
@property (readonly, nonatomic) struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *styles;
@property (readonly, nonatomic) struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *infos;
@property (nonatomic) struct { unsigned int x0; struct *x1; struct *x2; struct *x3; } sprites;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newSpriteDataStore;

- (void)enumerateSpritesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)applyChangeDetails:(id)a0;
- (id)init;
- (void)recycle;
- (void)dealloc;
- (void)insertSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0;
- (void)moveSpritesFromIndexes:(struct __CFArray { } *)a0 toIndexes:(id)a1;
- (id)spriteAtIndexes:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)spriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_collectSpriteIndexes:(id)a0 inRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_init;
- (void)moveSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 toRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a1;
- (struct { unsigned int x0; struct *x1; struct *x2; struct *x3; })spritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0;
- (id)spriteIndexesWithMediaFlags:(unsigned char)a0;
- (void)removeSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0;
- (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 usingBlock:(id /* block */)a1;

@end
