@class NSDictionary, NSString;

@interface CVALightRequestImplBase : NSObject <CVALightRequest>

@property (retain) NSDictionary *faceKitProcessOutput;
@property float portraitStyleStrength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
