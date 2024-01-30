@class NSMutableArray;
@protocol BWJasperColorStillsExecutorInputDelegate;

@interface BWJasperColorStillsExecutorInput : BWStillImageProcessorInput {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _colorBufferPTS;
    double _colorBufferExposureTime;
    int _numberOfPointCloudsRequired;
    int _maxinimumNumberOfPointCLouds;
}

@property (retain, nonatomic) id<BWJasperColorStillsExecutorInputDelegate> delegate;
@property (readonly, nonatomic, getter=isReadyToExecute) BOOL readyToExecute;
@property (readonly, nonatomic) NSMutableArray *pointClouds;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *colorBuffer;
@property (readonly, nonatomic) unsigned long long colorBufferType;
@property (readonly, nonatomic) BOOL needMorePointClouds;
@property (nonatomic) BOOL skipProcessing;

- (void)dealloc;
- (void)executeNow;
- (void)addPointCloud:(struct opaqueCMSampleBuffer { } *)a0;
- (void)setColorBufferPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 exposureTime:(double)a1;
- (void)setColorBuffer:(struct opaqueCMSampleBuffer { } *)a0 type:(unsigned long long)a1;
- (id)jasperPointCloudsForColorBuffer;
- (void)_trimPointClouds;
- (id)initWithSettings:(id)a0 portType:(id)a1;

@end
