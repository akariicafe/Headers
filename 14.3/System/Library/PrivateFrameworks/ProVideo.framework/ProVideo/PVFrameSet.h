@class PVImageBuffer, NSMutableDictionary, AVDepthData, PVCMSampleBuffer;

@interface PVFrameSet : NSObject {
    struct unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> > { struct __compressed_pair<PVGCDLock *, std::__1::default_delete<PVGCDLock> > { struct PVGCDLock *__value_; } __ptr_; } _mdLock;
    NSMutableDictionary *_metadata;
}

@property (readonly, nonatomic) PVCMSampleBuffer *colorSampleBuffer;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationTimeStamp;
@property (readonly, nonatomic) PVImageBuffer *colorImageBuffer;
@property (readonly, nonatomic) AVDepthData *depthData;
@property (retain) PVImageBuffer *alphaMaskImageBuffer;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)metadataDict;
- (void)setMetadataDict:(id)a0;
- (id)metadataObjectForKey:(id)a0;
- (void)setMetadataObject:(id)a0 forKey:(id)a1;
- (id)initWithColorBuffer:(id)a0 depthData:(id)a1 metadata:(id)a2;
- (id)initWithColorBuffer:(id)a0 metadata:(id)a1;
- (void)commonInitWithColorBuffer:(id)a0 depthData:(id)a1 metadata:(id)a2;

@end
