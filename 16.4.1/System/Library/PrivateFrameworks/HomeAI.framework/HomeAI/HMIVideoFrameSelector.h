@class NSString;
@protocol HMIVideoFrameSelectorDelegate;

@interface HMIVideoFrameSelector : HMIVideoAnalyzerProcessingNode <HMFLogging>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } targetInterval;
@property (readonly) struct __CFArray { } *references;
@property unsigned long long maxReferences;
@property BOOL enabled;
@property BOOL resetReferences;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } referenceInterval;
@property (weak) id<HMIVideoFrameSelectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)flush;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)setSampleRate:(double)a0;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
