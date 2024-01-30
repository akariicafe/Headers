@protocol BWStereoDisparityProcessorInputDelegate;

@interface BWStereoDisparityProcessorInput : BWStillImageProcessorInput

@property (retain, nonatomic) id<BWStereoDisparityProcessorInputDelegate> delegate;
@property (nonatomic) BOOL equalizeTeleGainToMatchReference;
@property (nonatomic) BOOL emitAuxiliaryInput;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *referenceSbuf;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *auxiliarySbuf;

- (void)dealloc;
- (id)initWithSettings:(id)a0 portType:(id)a1;
- (void)addSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
