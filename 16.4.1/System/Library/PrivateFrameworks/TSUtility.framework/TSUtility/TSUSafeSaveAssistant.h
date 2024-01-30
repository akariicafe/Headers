@class NSURL;

@interface TSUSafeSaveAssistant : NSObject {
    NSURL *_saveURL;
    NSURL *_temporaryDirectoryURL;
}

@property (readonly, nonatomic) NSURL *writeURL;

+ (BOOL)finishWritingToURL:(id)a0 byMovingItemAtURL:(id)a1 addingAttributes:(id)a2 error:(id *)a3;
+ (void)removeTemporaryDirectoryAtURL:(id)a0;
+ (id)temporaryDirectoryURLForWritingToURL:(id)a0 error:(id *)a1;
+ (void)writeAttributes:(id)a0 toURL:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeTemporaryDirectory;
- (BOOL)endSaveWithSuccess:(BOOL)a0 addingAttributes:(id)a1 error:(id *)a2;
- (BOOL)endSaveWithSuccess:(BOOL)a0 toURL:(id)a1 addingAttributes:(id)a2 error:(id *)a3;
- (id)initForSavingToURL:(id)a0 error:(id *)a1;

@end
