@class NSString;

@interface HMDCameraClipImportVideoSegmentMetadata : NSObject

@property (readonly, copy) NSString *resourcePath;
@property (readonly, getter=isHeader) BOOL header;
@property (readonly) double duration;

- (void).cxx_destruct;
- (id)initWithVideoSegmentMetadata:(id)a0;

@end
