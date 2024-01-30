@class NSString, NSObject;
@protocol OS_dispatch_queue, VLLocalizationDataProvider;

@interface VLLocalizer : NSObject <VLLocalizationDataProviderDelegate> {
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _vlOnce;
    struct vl_t { } *_vl;
    id<VLLocalizationDataProvider> _dataProvider;
    id<VLLocalizationDataProvider> _backupDataProvider;
    unsigned long long _signpostID;
    int _algorithmVersion;
    NSObject<OS_dispatch_queue> *_recorderQueue;
}

@property (class, copy, nonatomic, getter=_debugInfoRecorder, setter=_setDebugInfoRecorder:) id /* block */ debugInfoRecorder;
@property (class, readonly, nonatomic) double maximumHorizontalAccuracyThreshold;
@property (class, readonly, nonatomic) double minimumTiltAngle;
@property (class, readonly, getter=isVisualLocalizationSupported) BOOL visualLocalizationSupported;

@property (nonatomic, getter=_algorithmVersion, setter=_setAlgorithmVersion:) int algorithmVersion;
@property (nonatomic, getter=_debugInfoShouldPreserveImageData, setter=_setDebugInfoShouldPreserveImageData:) BOOL debugInfoShouldPreserveImageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_commonInit;
- (id)initWithAuditToken:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDataProvider:(id)a0;
- (void)dataProvider:(id)a0 didChangeFormatVersion:(unsigned int)a1;
- (struct vl_t { } *)_vlHandle;
- (id)locateWithPixelBuffer:(id)a0 location:(SEL)a1 heading:(struct __CVBuffer { } *)a2 gravity:(struct { double x0; })a3 transform:(struct { double x0; double x1; })a4 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a5 radialDistortion:(struct { void /* unknown type, empty encoding */ x0[3]; })a6 timestamp:(double)a7 error:(id *)a8;
- (id)locateWithPixelBuffer:(id)a0 deviceLocation:(SEL)a1 heading:(struct __CVBuffer { } *)a2 gravity:(id)a3 transform:(struct { double x0; double x1; })a4 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a5 radialDistortion:(struct { void /* unknown type, empty encoding */ x0[3]; })a6 exposureTargetOffset:(double)a7 timestamp:(double)a8 error:(id *)a9;
- (void)determineAvailabilityAtLocation:(struct { double x0; })a0 callbackQueue:(id)a1 callback:(id /* block */)a2;
- (id)_fileURLForTile:(const struct { int x0; int x1; int x2; int x3; } *)a0 error:(id *)a1;
- (void)prepareWithLocation:(struct { double x0; })a0;
- (void)prepareWithDeviceLocation:(id)a0;
- (id)locateWithPixelBuffer:(id)a0 timestamp:(SEL)a1 location:(struct __CVBuffer { } *)a2 gravity:(unsigned long long)a3 transform:(struct { double x0; })a4 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a5 radialDistortion:(struct { void /* unknown type, empty encoding */ x0[3]; })a6 error:(id *)a7;
- (id)locateWithPixelBuffer:(id)a0 timestamp:(SEL)a1 location:(struct __CVBuffer { } *)a2 heading:(unsigned long long)a3 gravity:(struct { double x0; })a4 transform:(struct { double x0; double x1; })a5 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a6 radialDistortion:(struct { void /* unknown type, empty encoding */ x0[3]; })a7 error:(id *)a8;
- (id)locateWithPixelBuffer:(id)a0 deviceLocation:(SEL)a1 heading:(struct __CVBuffer { } *)a2 gravity:(id)a3 transform:(struct { double x0; double x1; })a4 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a5 radialDistortion:(struct { void /* unknown type, empty encoding */ x0[3]; })a6 ambientLightIntensity:(double)a7 timestamp:(double)a8 error:(id *)a9;

@end
