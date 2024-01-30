@class NSString;

@interface HMDCameraClipImportPosterFrameMetadata : NSObject

@property (readonly, copy) NSString *resourcePath;
@property (readonly) double offset;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;

- (void).cxx_destruct;
- (id)initWithPosterFrameMetadata:(id)a0;

@end
