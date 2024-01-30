@class NSString;

@interface _UIWebFileUploadItem : NSObject

@property (retain, nonatomic) NSString *filePath;

- (id)initWithFilePath:(id)a0;
- (void)dealloc;
- (BOOL)isVideo;
- (id)displayImage;

@end
