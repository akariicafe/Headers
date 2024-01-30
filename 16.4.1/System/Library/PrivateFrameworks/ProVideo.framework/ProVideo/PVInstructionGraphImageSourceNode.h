@class NSURL, NSString;
@protocol PVImageDelegate;

@interface PVInstructionGraphImageSourceNode : PVInstructionGraphSourceNode <NSCacheDelegate> {
    struct CachedImageInfo { BOOL cached; struct CGSize { double width; double height; } size; BOOL imageExists; PVInstructionGraphImageSourceNode *_source; struct HGSynchronizable *_lock; } m_cachedImageInfo;
    struct HGRef<PVRenderManager> { struct PVRenderManager *m_Obj; } m_renderManager;
    BOOL _useHDRGainMap;
    float _headRoomforHDRGainMap;
    NSString *_keyHDRGainMap;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) id<PVImageDelegate> imageDelegate;
@property (nonatomic) int renderingIntent;
@property (nonatomic) BOOL useAnimationInfo;
@property (nonatomic) int fillMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)purgeBitmapCache:(BOOL)a0;

- (void)cache:(id)a0 willEvictObject:(id)a1;
- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (id)instructionGraphNodeDescription;
- (struct PCRect<double> { double x0; double x1; double x2; double x3; })inputSizeForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0 returnLoadedEffects:(id)a1;
- (struct HGRef<HGNode> { struct HGNode *x0; })applyGainMapToGraph:(struct HGRef<HGNode> { struct HGNode *x0; })a0 gainMap:(struct HGRef<HGBitmap> { struct HGBitmap *x0; })a1 withHeadroom:(float)a2;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (void)enableHDRGainMap:(BOOL)a0;
- (id)initWithURL:(id)a0 animation:(id)a1 isExporting:(BOOL)a2 imageDelegate:(id)a3 renderingIntent:(int)a4;
- (id)initWithURL:(id)a0 animation:(id)a1 isExporting:(BOOL)a2 imageDelegate:(id)a3 renderingIntent:(int)a4 fillMode:(int)a5;
- (id)initWithURL:(id)a0 key:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 isExporting:(BOOL)a3 imageDelegate:(id)a4 renderingIntent:(int)a5;
- (id)initWithURL:(id)a0 key:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 isExporting:(BOOL)a3 imageDelegate:(id)a4 renderingIntent:(int)a5 fillMode:(int)a6;
- (struct HGRef<HGNode> { struct HGNode *x0; })internalHGNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackInputs:(const void *)a1 renderer:(const void *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (id)loadImageTiles:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 colorSpace:(id)a2 imageProperties:(struct PVImageProperties { unsigned int x0; int x1; unsigned int x2; struct CGColorSpace *x3; } *)a3;
- (id)newCVPixelBufferCacheItemForGainMapWithColorSpace:(id)a0;
- (id)newCVPixelBufferCacheItemForImage:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })pixelTransformForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (void)setHDRGainMapHeadroom:(float)a0;

@end
