@class NSObject, FRCImageProcessor, OpticalFlow;
@protocol OS_os_log;

@interface FRCOpticalFlowEstimator : NSObject {
    OpticalFlow *_opticalFlow;
    FRCImageProcessor *_processor;
    BOOL _resourcePreAllocated;
    long long _usage;
    unsigned long long _width;
    unsigned long long _height;
    long long _inputRotation;
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) unsigned long long flowWidth;
@property (readonly, nonatomic) unsigned long long flowHeight;

- (void)releaseResources;
- (void)allocateResources;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithUsage:(long long)a0;
- (struct __CVBuffer { } *)opticalFlowFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;
- (long long)opticalFlowFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2;
- (id)opticalFlowsFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;
- (long long)opticalFlowsFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3;

@end
