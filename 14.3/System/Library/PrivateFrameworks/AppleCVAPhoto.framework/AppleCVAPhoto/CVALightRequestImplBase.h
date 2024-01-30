@class NSDictionary, NSString;

@interface CVALightRequestImplBase : NSObject <CVALightRequest>

@property (retain) NSDictionary *faceKitProcessOutput;
@property float portraitStyleStrength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
