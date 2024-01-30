@class NSArray, NSString;

@interface VNCreateDetectionprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)_applicableDetectorAndOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;

@end
