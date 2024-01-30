@class NSString;
@protocol CMISoftwareFlashRenderingProcessor;

@interface BWSWFRProcessorController : BWStillImageProcessorController <BWSWFRProcessorControllerInputUpdatesDelegate, CMISoftwareFlashRenderingProcessorDelegate> {
    int _version;
    id<CMISoftwareFlashRenderingProcessor> _processor;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct opaqueCMFormatDescription { } *_demosaicedRawFormatDescription;
}

@property (readonly, nonatomic) unsigned int outputPixelFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)usesCustomProcessingFlow;

- (void)dealloc;
- (int)process;
- (id)initWithConfiguration:(id)a0;
- (int)prepare;
- (void)reset;
- (void)input:(id)a0 addAmbientFrame:(struct opaqueCMSampleBuffer { } *)a1;
- (void)input:(id)a0 addFlashFrame:(struct opaqueCMSampleBuffer { } *)a1;
- (void)inputAddFrameFailed:(id)a0;
- (id)metalImageBufferProcessor;
- (id)processorNewInferences:(id)a0;
- (id)requestForInput:(id)a0 delegate:(id)a1 errOut:(int *)a2;

@end
