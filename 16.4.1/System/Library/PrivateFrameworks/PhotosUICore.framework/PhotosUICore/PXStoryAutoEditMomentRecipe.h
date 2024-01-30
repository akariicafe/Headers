@interface PXStoryAutoEditMomentRecipe : NSObject

@property (readonly, nonatomic) unsigned long long recipeType;
@property (readonly, nonatomic) struct { long long kind; double duration; union { struct { unsigned long long direction; unsigned long long relativeMotion; } pan; struct { unsigned long long direction; } scale; struct { unsigned long long direction; } rotate; struct { char kind; char firstAssetDirection; } wipe; } settings; } incomingTransition;
@property (readonly, nonatomic) struct { long long kind; double duration; union { struct { unsigned long long direction; unsigned long long relativeMotion; } pan; struct { unsigned long long direction; } scale; struct { unsigned long long direction; } rotate; struct { char kind; char firstAssetDirection; } wipe; } settings; } innerTransition;
@property (readonly, nonatomic) struct { long long style; union { struct { unsigned long long direction; unsigned long long relativeMotion; } pan; struct { unsigned long long direction; } scale; struct { unsigned long long direction; } rotate; } settings; } motion;

- (id)init;
- (id)description;
- (id)initWithRecipeType:(unsigned long long)a0 incomingTransition:(struct { long long x0; double x1; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; struct { char x0; char x1; } x3; } x2; })a1 innerTransition:(struct { long long x0; double x1; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; struct { char x0; char x1; } x3; } x2; })a2 motion:(struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; })a3;

@end
