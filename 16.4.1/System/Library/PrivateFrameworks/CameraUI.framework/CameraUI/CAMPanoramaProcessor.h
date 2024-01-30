@class CAMPanoramaCaptureRequest, NSMutableDictionary;
@protocol CAMPanoramaProcessorDelegate;

@interface CAMPanoramaProcessor : NSObject

@property (nonatomic, getter=isCapturingPanorama, setter=_setCapturingPanorama:) BOOL capturingPanorama;
@property (retain, nonatomic, setter=_setRequest:) CAMPanoramaCaptureRequest *request;
@property (readonly, nonatomic) NSMutableDictionary *_initialMetadataByRequestUUID;
@property (readonly, nonatomic) struct OpaqueFigSampleBufferProcessor { } *_processor;
@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *_greenTeaLogger;
@property (readonly, weak, nonatomic) id<CAMPanoramaProcessorDelegate> delegate;
@property (readonly, nonatomic) long long photoEncodingBehavior;
@property (readonly, nonatomic) struct CGSize { double width; double height; } previewSize;
@property (nonatomic) long long direction;

- (void)startPanoramaCaptureWithRequest:(id)a0;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 encodingBehavior:(long long)a1;
- (void)processPanoramaCaptureWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopPanoramaCapture;

@end
