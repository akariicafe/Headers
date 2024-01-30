@class BWStillImageSettings, FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWStillImageCaptureStreamSettings, BWStillImageProcessingSettings, NSString, NSMutableDictionary;

@interface BWStillImageProcessorInput : NSObject {
    BWStillImageSettings *_settings;
    BWStillImageCaptureStreamSettings *_captureStreamSettings;
    NSMutableDictionary *_outputSampleBufferRoutersByBufferType;
}

@property (readonly, nonatomic) BWStillImageSettings *stillImageSettings;
@property (readonly, nonatomic) FigCaptureStillImageSettings *settings;
@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings;
@property (readonly, nonatomic) BWStillImageCaptureStreamSettings *captureStreamSettings;
@property (readonly, nonatomic) BWStillImageProcessingSettings *processingSettings;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) NSString *portType;

- (void)dealloc;
- (id)description;
- (id)initWithSettings:(id)a0 portType:(id)a1;
- (void)addOutputSampleBufferRouter:(id /* block */)a0 forBufferTypes:(id)a1;
- (id)outputSampleBufferRouterForBufferType:(unsigned long long)a0;
- (void)addBypassedProcessorType:(unsigned long long)a0 forBufferTypes:(id)a1;

@end
