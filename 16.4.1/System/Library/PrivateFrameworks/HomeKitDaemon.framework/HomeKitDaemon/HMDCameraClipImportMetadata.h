@class NSArray, NSDate;

@interface HMDCameraClipImportMetadata : NSObject

@property (readonly) NSDate *startDate;
@property (readonly) double targetFragmentDuration;
@property (readonly) NSArray *videoSegments;

- (void).cxx_destruct;
- (id)initClipData:(id)a0;

@end
