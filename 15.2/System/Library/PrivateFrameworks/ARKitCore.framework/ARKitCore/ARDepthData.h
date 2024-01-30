@class NSString, ADCameraCalibration;

@interface ARDepthData : NSObject <NSSecureCoding, ARResultData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct __CVBuffer { } *depthMap;
@property (nonatomic) struct __CVBuffer { } *normalsBuffer;
@property (nonatomic) struct __CVBuffer { } *confidenceBuffer;
@property (nonatomic) double timestamp;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } extrinsicsToAppNode;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } deviceTransform;
@property (retain, nonatomic) ADCameraCalibration *adCameraCalibration;
@property (readonly, nonatomic) struct __CVBuffer { } *confidenceMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)tracingEntry;
- (id)initWithDepthMap:(struct __CVBuffer { } *)a0 confidenceMap:(struct __CVBuffer { } *)a1;

@end
