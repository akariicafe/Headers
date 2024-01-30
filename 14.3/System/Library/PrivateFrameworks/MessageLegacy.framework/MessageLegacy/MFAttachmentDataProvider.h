@class NSURL;

@interface MFAttachmentDataProvider : NSObject

@property (retain) NSURL *url;

+ (id)dataProviderWithURL:(id)a0;
+ (id)dataProviderWithPath:(id)a0;

- (BOOL)save:(id)a0;
- (id)data;
- (BOOL)exists;
- (void)dealloc;
- (BOOL)_isFileURL;
- (id)_fileAttributes:(id)a0;
- (id)errorWithMessage:(id)a0 code:(long long)a1;
- (id)initWithURL:(id)a0;
- (id)_path;

@end
