@class NSMutableArray;

@interface TSCH3DTransforms : NSObject {
    NSMutableArray *_array;
}

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;

+ (id)transforms;
+ (id)transformsWithSize:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)arrayIndex:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a0;
- (void)setTransform:(id)a0 atIndex:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a1;
- (id)transformAtIndex:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a0;

@end
