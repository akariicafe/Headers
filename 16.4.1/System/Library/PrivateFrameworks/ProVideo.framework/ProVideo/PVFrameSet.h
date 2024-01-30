@class PVImageBuffer, NSMutableDictionary, AVDepthData, PVCMSampleBuffer;
@protocol MTLTexture;

@interface PVFrameSet : NSObject {
    struct unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> { struct __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>> { struct PVGCDLock *__value_; } __ptr_; } _mdLock;
    NSMutableDictionary *_metadata;
}

@property (readonly, nonatomic) PVCMSampleBuffer *colorSampleBuffer;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationTimeStamp;
@property (readonly, nonatomic) PVImageBuffer *colorImageBuffer;
@property (readonly, nonatomic) AVDepthData *depthData;
@property (retain) PVImageBuffer *alphaMaskImageBuffer;
@property (readonly, nonatomic) id<MTLTexture> matte;
@property (readonly, nonatomic) id<MTLTexture> dilatedDepth;

+ (id)frameSetWithARFrame:(id)a0 depthData:(id)a1 depthFreshness:(int)a2 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
+ (id)frameSetWithARFrame:(id)a0 depthData:(id)a1 depthFreshness:(int)a2 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 matte:(id)a4 dilatedDepth:(id)a5;
+ (id)frameSetWithARFrame:(id)a0 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)frameSetWithARFrame:(id)a0 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 matte:(id)a2 dilatedDepth:(id)a3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)commonInitWithColorBuffer:(id)a0 depthData:(id)a1 metadata:(id)a2 matte:(id)a3 dilatedDepth:(id)a4;
- (id)initWithColorBuffer:(id)a0 depthData:(id)a1 metadata:(id)a2;
- (id)initWithColorBuffer:(id)a0 depthData:(id)a1 metadata:(id)a2 matte:(id)a3 dilatedDepth:(id)a4;
- (id)initWithColorBuffer:(id)a0 metadata:(id)a1;
- (id)metadataDict;
- (id)metadataObjectForKey:(id)a0;
- (void)setMetadataDict:(id)a0;
- (void)setMetadataObject:(id)a0 forKey:(id)a1;

@end
