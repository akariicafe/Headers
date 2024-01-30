@class CVNLPCommSafetyHandler;

@interface VICVNLPCommSafetyHandlerInternal : NSObject {
    CVNLPCommSafetyHandler *_cvnlpCommSafetyHandler;
}

- (void).cxx_destruct;
- (id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithPreferredMetalDevice:(id)a0;

@end
