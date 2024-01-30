@class NSError, NSString, NSFileManager;

@interface PLFilesystemIterator : NSObject {
    NSString *_path;
    NSFileManager *_fileManager;
}

@property (readonly, copy) NSError *error;

- (id)initWithFilePath:(id)a0;
- (void).cxx_destruct;
- (void)visitURLsLoadingPropertiesForKeys:(id)a0 withBlock:(id /* block */)a1;

@end
