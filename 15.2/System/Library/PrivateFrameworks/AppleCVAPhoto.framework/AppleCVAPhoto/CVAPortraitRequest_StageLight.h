@class NSData, NSString, CVAMattingRequest;
@protocol CVAPortraitGenericRequest;

@interface CVAPortraitRequest_StageLight : NSObject <CVAPortraitRequest>

@property (readonly) CVAMattingRequest *mattingRequest;
@property (readonly) struct __CVBuffer { } *destinationColorPixelBuffer;
@property (readonly) NSData *proxyCubeData;
@property (readonly) NSData *cubeData;
@property (readonly) float vignetteIntensity;
@property (readonly) float stageLightIntensity;
@property (retain) id<CVAPortraitGenericRequest> parentGenericRequestFrom;
@property (retain) id<CVAPortraitGenericRequest> parentGenericRequestTo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMattingRequest:(id)a0 destinationColorPixelBuffer:(struct __CVBuffer { } *)a1 proxyCubeData:(id)a2 cubeData:(id)a3 vignetteIntensity:(float)a4 stageLightIntensity:(float)a5;

@end
