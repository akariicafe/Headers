@class UIColor;
@protocol DKOpenGLRendererDelegate;

@interface DKOpenGLRenderer : NSObject {
    BOOL _didNotifyRendererDelegate;
    int mBufferSize;
    unsigned int mWetPaintProg;
    unsigned int mDryPaintProg;
    unsigned int mCompositeProg;
    unsigned int mTextureProg;
    unsigned int mColorProg;
    unsigned int mAttributes;
    unsigned int mVbo;
    struct _NSRange { unsigned long long location; unsigned long long length; } mVertexRange;
    struct vector<Vertex, std::__1::allocator<Vertex> > { struct Vertex *__begin_; struct Vertex *__end_; struct __compressed_pair<Vertex *, std::__1::allocator<Vertex> > { struct Vertex *__value_; } __end_cap_; } mContiguousVertexStorage;
    struct vector<VertexGroup, std::__1::allocator<VertexGroup> > { struct VertexGroup *__begin_; struct VertexGroup *__end_; struct __compressed_pair<VertexGroup *, std::__1::allocator<VertexGroup> > { struct VertexGroup *__value_; } __end_cap_; } mVertexHistory;
    struct vector<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> > > { struct pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> *__begin_; struct pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> *__end_; struct __compressed_pair<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> *, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> > > { struct pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> *__value_; } __end_cap_; } mNonCollisionSegments;
    void /* unknown type, empty encoding */ U_COLOR;
    struct vector<Page, std::__1::allocator<Page> > { struct Page *__begin_; struct Page *__end_; struct __compressed_pair<Page *, std::__1::allocator<Page> > { struct Page *__value_; } __end_cap_; } mPages;
    unsigned int mWetPaintBufferFBO;
    unsigned int mWetPaintBufferT;
    void /* unknown type, empty encoding */ mWetPaintBufferSize;
    BOOL mSharedContext;
    BOOL mPaperTexIsShared;
    unsigned int mPaperTex;
    void /* unknown type, empty encoding */ mWinSize;
    void /* unknown type, empty encoding */ mCanvasSize;
    void /* unknown type, empty encoding */ mCanvasOffset;
    float mTime;
    float mTimeWetBecameDirty;
    float mParticleLifespan;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mDirtyCanvasRegion;
    int mCompositeProgViewportUniformLocation;
    int mCompositeColorUniformLocation;
    int mWetPaintProgTimeUniformLocation;
    int mWetPaintProgSubtractEndPointsOnlyUniformLocation;
    int mWetPaintProgLifespanUniformLocation;
    int mDryPaintProgXCoordOffsetUniformLocation;
    int mColorProgColorUniformLocation;
    int mColorProgModelViewProjectionUniformLocation;
    int mTextureProgModelViewProjectionUniformLocation;
}

@property (weak, nonatomic) id<DKOpenGLRendererDelegate> delegate;
@property (retain, nonatomic) UIColor *inkColor;
@property (nonatomic) double lineWidthScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic, getter=isUndoEnabled) BOOL undoEnabled;
@property (nonatomic) BOOL ignoreFirstUndoItem;
@property (nonatomic) double backingScale;
@property (nonatomic) BOOL drawingEnabled;
@property (nonatomic) BOOL allowWetComposite;
@property (nonatomic) long long numPages;

- (void)undo;
- (void)clear;
- (void)draw;
- (id)snapshotImage;
- (void)teardown;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)update;
- (BOOL)initGL;
- (id).cxx_construct;
- (void)didCompleteStroke;
- (void)resetRendererState;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1;
- (void)didBeginNewStroke;
- (void)updateDryForcefully;
- (void)redrawEntireDrawingImmediatelyWithLayeredBlending:(BOOL)a0;
- (void)addPoints:(id)a0 withSegmentLength:(unsigned long long)a1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 bufferSize:(int)a2 sharedContext:(BOOL)a3;
- (void)destroyFrameBuffers;
- (void)initializeFrameBuffers;
- (void)didResize;
- (void)drawContiguousVertexStorageImmediatelyWithLayeredBlending:(BOOL)a0;
- (BOOL)detectCollision:(id)a0 :(SEL)a1;
- (void)updateWet;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionWithVertices:(struct vector<Vertex, std::__1::allocator<Vertex> > { struct Vertex *x0; struct Vertex *x1; struct __compressed_pair<Vertex *, std::__1::allocator<Vertex> > { struct Vertex *x0; } x2; })a0 withInflationAmount:(float)a1;
- (void)updateDryCycleIncludingComposite:(BOOL)a0;
- (void)renderToWetPaintBufferWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)renderToDryPaintBuffer;
- (void)renderToComposite:(BOOL)a0;
- (void)clearWetPaintBuffer;
- (void)drawComposite;
- (void)removeVertexHistoryElement;
- (void)updateVertexControllerWithData:(struct vector<Vertex, std::__1::allocator<Vertex> > { struct Vertex *x0; struct Vertex *x1; struct __compressed_pair<Vertex *, std::__1::allocator<Vertex> > { struct Vertex *x0; } x2; })a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 allowWet:(BOOL)a2;
- (void)clearDryPaintBuffer;
- (void)clearComposite;
- (void)appendVertexHistoryElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getVertexBounds;
- (BOOL)canvasIsEmpty;
- (void)updateVertexControllerWithDataRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 allowWet:(BOOL)a1;

@end
