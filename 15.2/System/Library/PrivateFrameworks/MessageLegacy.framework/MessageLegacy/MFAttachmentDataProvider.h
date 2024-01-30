@class NSURL;

@interface MFAttachmentDataProvider : NSObject

@property (retain) NSURL *url;

+ (id)dataProviderWithURL:(id)a0;
+ (id)dataProviderWithPath:(id)a0;

- (id)initWithURL:(id)a0;
- (BOOL)exists;
- (id)_path;
- (BOOL)save:(id)a0;
- (void)dealloc;
- (id)data;
- (BOOL)_isFileURL;
- (id)_fileAttributes:(id)a0;
- (id)errorWithMessage:(id)a0 code:(long long)a1;

@end
