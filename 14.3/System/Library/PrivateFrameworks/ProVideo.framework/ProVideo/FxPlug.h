@interface FxPlug : NSObject <FxPinCreation, FxStreamProviding> {
    struct FxPlugPriv { id x0; id x1; id x2; id x3; } *_priv;
}

+ (id)pinInPinList:(id)a0 withUUID:(id)a1;
+ (id)fxPlugWithDescriptor:(id)a0 andHost:(id)a1;
+ (unsigned int)leastCommonMultipleOfA:(unsigned int)a0 andB:(unsigned int)a1;

- (id)host;
- (void)dealloc;
- (id)descriptor;
- (id)inputPins;
- (id)outputPins;
- (id)initWithDescriptor:(id)a0 andHost:(id)a1;
- (id)createInputPinArray;
- (id)createOutputPinArray;
- (id)imageOutputPin;
- (Class)canvasControlClass;
- (void)setCanvasControlClass:(Class)a0;
- (id)filterImageInputPin;
- (id)transitionImageAInputPin;
- (id)transitionImageBInputPin;
- (void)valueChangedForPin:(id)a0;
- (unsigned int)timeScaleForStream:(id)a0;
- (double)startTimeForStream:(id)a0;
- (double)durationForStream:(id)a0;
- (double)frameDurationForStream:(id)a0;
- (BOOL)isStreamPremultiplied:(id)a0;
- (double)pixelAspectForStream:(id)a0;
- (BOOL)isContextTypeSupported:(int)a0 bySample:(id)a1;
- (unsigned long long)fieldOrderForSample:(id)a0;
- (BOOL)isSamplePredetermined:(id)a0;
- (id)requiredSamplesForSample:(id)a0;
- (id)evaluateSample:(id)a0 withOptions:(id)a1;
- (id)domainOfDefinitionForSample:(id)a0;
- (id)inputPinWithUUID:(id)a0;
- (id)outputPinWithUUID:(id)a0;
- (BOOL)renderImageOutputAtTime:(double)a0 withOptions:(id)a1 inFxContext:(id)a2 inRegionOfInterest:(id)a3;

@end
