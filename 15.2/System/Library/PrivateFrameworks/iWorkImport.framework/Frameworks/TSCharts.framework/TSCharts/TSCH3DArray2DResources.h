@class TSCH3DArray2D;

@interface TSCH3DArray2DResources : TSCH3DMutable2DResources {
    TSCH3DArray2D *_resources;
}

+ (id)_resources;
+ (id)resourcesWithSize:(const void *)a0;
+ (id)resourcesWithResource:(id)a0;

- (id)resourceAtIndex:(const void *)a0;
- (id)initWithSize:(const void *)a0;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })size;
- (void).cxx_destruct;
- (void)resize:(const void *)a0;
- (id)firstResource;
- (void)setResource:(id)a0 atIndex:(const void *)a1;
- (BOOL)hasResourceAtIndex:(const void *)a0;

@end
