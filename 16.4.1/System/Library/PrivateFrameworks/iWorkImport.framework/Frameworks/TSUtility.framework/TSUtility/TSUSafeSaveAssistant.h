@class NSURL, TSUTemporaryDirectory;

@interface TSUSafeSaveAssistant : NSObject {
    NSURL *_saveURL;
    TSUTemporaryDirectory *_temporaryDirectory;
}

@property (readonly, nonatomic) NSURL *writeURL;

+ (void)writeAttributes:(id)a0 toURL:(id)a1;
+ (BOOL)finishWritingToURL:(id)a0 byMovingOrCopyingItemAtURL:(id)a1 addingAttributes:(id)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;
- (BOOL)endSaveWithSuccess:(BOOL)a0 addingAttributes:(id)a1 error:(id *)a2;
- (BOOL)endSaveWithSuccess:(BOOL)a0 toURL:(id)a1 addingAttributes:(id)a2 error:(id *)a3;
- (id)initForSavingToURL:(id)a0 error:(id *)a1;

@end
