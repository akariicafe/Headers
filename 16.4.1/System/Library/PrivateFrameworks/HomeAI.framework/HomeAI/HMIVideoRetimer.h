@class NSString;
@protocol HMIVideoRetimerDelegate;

@interface HMIVideoRetimer : HMIVideoProcessingNode <HMFLogging> {
    struct opaqueCMSampleBuffer { } *_lastSample;
}

@property (weak) id<HMIVideoRetimerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)flushWithNextSamplePTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
