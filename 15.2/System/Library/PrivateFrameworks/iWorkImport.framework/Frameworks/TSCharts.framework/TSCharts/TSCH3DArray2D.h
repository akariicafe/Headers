@class NSMutableArray;

@interface TSCH3DArray2D : NSObject {
    NSMutableArray *_elements;
}

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;

+ (id)array2DWithSize:(const void *)a0;
+ (id)array2D;

- (id)firstObject;
- (id)initWithSize:(const void *)a0;
- (id)objectAtIndex:(const void *)a0;
- (void)setObject:(id)a0 atIndex:(const void *)a1;
- (void).cxx_destruct;
- (void)resize:(const void *)a0;
- (id).cxx_construct;
- (BOOL)hasObjectAtIndex:(const void *)a0;

@end
