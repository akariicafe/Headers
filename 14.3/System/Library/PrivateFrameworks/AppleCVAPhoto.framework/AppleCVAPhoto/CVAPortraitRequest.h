@class NSData, NSString, CVAMattingRequest;
@protocol CVAPortraitGenericRequest;

@interface CVAPortraitRequest : NSObject <CVAPortraitRequest>

@property (readonly) int relightingCondition;
@property (readonly) NSData *backgroundColorCube;
@property (readonly) NSData *foregroundColorCube;
@property (readonly) float colorCubeIntensity;
@property (readonly) float simulatedFocalRatio;
@property (readonly) float sourceColorGain;
@property (readonly) float sourceColorLux;
@property (readonly) CVAMattingRequest *mattingRequest;
@property (readonly) struct __CVBuffer { } *destinationColorPixelBuffer;
@property (retain) id<CVAPortraitGenericRequest> parentGenericRequestFrom;
@property (retain) id<CVAPortraitGenericRequest> parentGenericRequestTo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMattingRequest:(id)a0 destinationColorPixelBuffer:(struct __CVBuffer { } *)a1 backgroundColorCube:(id)a2 foregroundColorCube:(id)a3 colorCubeIntensity:(float)a4 simulatedFocalRatio:(float)a5 sourceColorGain:(float)a6 sourceColorLux:(float)a7;

@end
