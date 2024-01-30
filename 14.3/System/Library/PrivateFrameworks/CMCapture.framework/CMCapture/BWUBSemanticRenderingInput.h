@class NSArray, NSString;

@interface BWUBSemanticRenderingInput : NSObject <BWNoiseReductionAndFusionProcessorSemanticRenderingInput>

@property (readonly, nonatomic) struct __CVBuffer { } *skinMask;
@property (readonly, nonatomic) struct __CVBuffer { } *skyMask;
@property (readonly, nonatomic) struct __CVBuffer { } *lowResPersonMask;
@property (readonly, nonatomic) NSArray *faceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSkinMask:(struct __CVBuffer { } *)a0 skyMask:(struct __CVBuffer { } *)a1 lowResPersonMask:(struct __CVBuffer { } *)a2 faceObservations:(id)a3;

@end
