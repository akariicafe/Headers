@class NSMutableArray;

@interface TSCH3DArray2D : NSObject {
    NSMutableArray *_elements;
}

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;

+ (id)array2D;
+ (id)array2DWithSize:(const void *)a0;

- (id)initWithSize:(const void *)a0;
- (id)firstObject;
- (id).cxx_construct;
- (void)setObject:(id)a0 atIndex:(const void *)a1;
- (id)objectAtIndex:(const void *)a0;
- (void).cxx_destruct;
- (void)resize:(const void *)a0;
- (BOOL)hasObjectAtIndex:(const void *)a0;

@end
