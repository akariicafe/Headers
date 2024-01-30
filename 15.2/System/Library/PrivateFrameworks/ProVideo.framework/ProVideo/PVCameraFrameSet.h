@class NSDictionary, PVImageBuffer, AVDepthData;

@interface PVCameraFrameSet : NSObject

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } colorTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } depthTransform;
@property (nonatomic) long long cameraPosition;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *colorSampleBuffer;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationTimeStamp;
@property (readonly, nonatomic) PVImageBuffer *colorImageBuffer;
@property (readonly, nonatomic) AVDepthData *depthData;
@property (retain) NSDictionary *metadata;
@property (retain) PVImageBuffer *alphaMaskImageBuffer;
@property (nonatomic) struct { double x; double y; double z; double w; } orientation;
@property (nonatomic) double rollRadians;
@property (nonatomic) long long deviceOrientation;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithColorBuffer:(struct opaqueCMSampleBuffer { } *)a0 depthData:(id)a1 metadata:(id)a2;
- (id)initWithColorBuffer:(struct opaqueCMSampleBuffer { } *)a0 metadata:(id)a1;
- (void)_sharedInitColorBuffer:(struct opaqueCMSampleBuffer { } *)a0 colorTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 depthData:(id)a2 depthTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 metadata:(id)a4;

@end
