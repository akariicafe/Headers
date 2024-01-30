@class NSMutableArray, TSCH3DTextureAtlasTextureResource;

@interface TSCH3DTextureAtlasTexture : NSObject {
    float mSamples;
    NSMutableArray *mLabels;
    struct vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int> > > { struct tvec2<int> *__begin_; struct tvec2<int> *__end_; struct __compressed_pair<glm::detail::tvec2<int> *, std::__1::allocator<glm::detail::tvec2<int> > > { struct tvec2<int> *__value_; } __end_cap_; } mPositions;
    long long mCurrentxpos;
    long long mCurrentypos;
    long long mCurrentheight;
    TSCH3DTextureAtlasTextureResource *mResource;
}

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;

- (id)initWithSize:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)resource;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })addLabel:(id)a0;
- (void)p_invalidateResource;
- (id)getTextureDataBuffer;

@end
