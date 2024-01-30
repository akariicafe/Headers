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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)flush;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
