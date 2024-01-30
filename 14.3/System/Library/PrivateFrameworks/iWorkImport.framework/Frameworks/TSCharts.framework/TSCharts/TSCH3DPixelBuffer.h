@interface TSCH3DPixelBuffer : NSObject

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;
@property (readonly, nonatomic) struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } bounds;
@property (readonly, nonatomic) unsigned long long components;
@property (readonly, nonatomic) char *buffer;
@property (readonly, nonatomic) struct CGContext { } *context;

+ (id)pixelBufferWithSize:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0 components:(unsigned long long)a1;
+ (id)pixelBufferFromFramebuffer:(id)a0 processor:(id)a1 session:(id)a2 sourceRegion:(const struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } *)a3 components:(unsigned long long)a4 flipped:(BOOL)a5;

- (void)flip;
- (void *)data;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithSize:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0 components:(unsigned long long)a1;
- (id)TSUImage;
- (void)copyPixelsFromData:(const void *)a0;
- (void)copyPixelsFromSourceBuffer:(id)a0 sourceRegion:(const struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } *)a1 targetRegion:(const struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } *)a2 flipped:(BOOL)a3;
- (BOOL)copyPixelsFromFramebuffer:(id)a0 processor:(id)a1 session:(id)a2 sourceRegion:(const struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } *)a3 targetRegion:(const struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } *)a4 flipped:(BOOL)a5;

@end
