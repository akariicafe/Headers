@class NSURL, NSString;

@interface IMImageSource : NSObject

@property (readonly, nonatomic) BOOL fileExists;
@property (readonly, nonatomic) struct CGImageSource { } *imageSourceRef;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *filePath;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFileURL:(id)a0;

@end
