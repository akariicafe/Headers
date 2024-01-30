@class NSURL, NSNumber;

@interface DEDCloudKitAttachmentModel : DEDCloudKitBaseModel

@property (retain) NSURL *url;
@property (retain) NSNumber *fileSize;

- (id)modelName;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 parameters:(id)a1;

@end
