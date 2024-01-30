@class NSString, NSMutableArray;
@protocol HMIVideoFrameSelectorDelegate, HMIMotionDetector;

@interface HMIVideoFrameSelector : HMIVideoAnalyzerProcessingNode <HMFLogging> {
    id<HMIMotionDetector> _detector;
    NSMutableArray *_candidates;
    BOOL _enabled;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _referenceInterval;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _targetInterval;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _expirationInterval;
    struct opaqueCMSampleBuffer { } *_reference;
}

@property (readonly) unsigned long long maxCandidates;
@property (weak) id<HMIVideoFrameSelectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)flush;
- (void)setSampleRate:(double)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_handleReference:(struct opaqueCMSampleBuffer { } *)a0 target:(struct opaqueCMSampleBuffer { } *)a1;
- (void)_drainCandidatesThatExpiredBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_synthesizeMotionDetectionWithTarget:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_ensureDetectorForPixelBuffer:(struct __CVBuffer { } *)a0;

@end
