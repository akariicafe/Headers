@class NSMutableArray, TSCH3DTextureAtlasTextureResource;

@interface TSCH3DTextureAtlasTexture : NSObject {
    float _samples;
    NSMutableArray *_labels;
    struct vector<glm::detail::tvec2<int>, std::allocator<glm::detail::tvec2<int>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec2<int> *, std::allocator<glm::detail::tvec2<int>>> { void *__value_; } __end_cap_; } _positions;
    long long _currentxpos;
    long long _currentypos;
    long long _currentheight;
    TSCH3DTextureAtlasTextureResource *_resource;
}

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;

- (id)initWithSize:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a0;
- (id)resource;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })addLabel:(id)a0;
- (void)p_invalidateResource;
- (id)getTextureDataBuffer;

@end
