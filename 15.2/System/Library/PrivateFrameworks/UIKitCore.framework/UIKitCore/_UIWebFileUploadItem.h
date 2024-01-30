@class NSString;

@interface _UIWebFileUploadItem : NSObject

@property (retain, nonatomic) NSString *filePath;

- (id)displayImage;
- (id)initWithFilePath:(id)a0;
- (BOOL)isVideo;
- (void)dealloc;

@end
