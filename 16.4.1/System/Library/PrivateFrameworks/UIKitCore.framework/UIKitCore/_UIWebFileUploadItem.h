@class NSString;

@interface _UIWebFileUploadItem : NSObject

@property (retain, nonatomic) NSString *filePath;

- (BOOL)isVideo;
- (id)initWithFilePath:(id)a0;
- (void)dealloc;
- (id)displayImage;

@end
