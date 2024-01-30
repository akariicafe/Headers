@class NSString;
@protocol CVABackgroundRequest, CVAPostProcessingRequest, CVALightRequest;

@interface CVAPortraitGenericRequestImpl : NSObject <CVAPortraitGenericRequest>

@property (retain) id<CVABackgroundRequest> background;
@property (retain) id<CVALightRequest> light;
@property (retain) id<CVAPostProcessingRequest> post;
@property BOOL isTmpConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
