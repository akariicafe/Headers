@class TSCH3DArray2D;

@interface TSCH3DArray2DResources : TSCH3DMutable2DResources {
    TSCH3DArray2D *mResources;
}

+ (id)mResources;
+ (id)resourcesWithSize:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;
+ (id)resourcesWithResource:(id)a0;

- (id)initWithSize:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;
- (id)resourceAtIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;
- (void)dealloc;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })size;
- (void)resize:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;
- (id)firstResource;
- (void)setResource:(id)a0 atIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (BOOL)hasResourceAtIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;

@end
