@class NSData, NSString;

@interface CVAPostProcessingRequestImplColorCube : NSObject <CVAPostProcessingRequest>

@property (retain) NSData *backgroundColorCube;
@property (retain) NSData *foregroundColorCube;
@property (retain) NSData *singleColorCube;
@property BOOL isMono;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
