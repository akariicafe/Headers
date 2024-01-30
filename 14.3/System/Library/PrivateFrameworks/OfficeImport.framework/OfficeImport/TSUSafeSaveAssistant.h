@class NSURL, OITSUTemporaryDirectory;

@interface TSUSafeSaveAssistant : NSObject {
    NSURL *_saveURL;
    OITSUTemporaryDirectory *_temporaryDirectory;
}

@property (readonly, nonatomic) NSURL *writeURL;

+ (BOOL)finishWritingToURL:(id)a0 byMovingOrCopyingItemAtURL:(id)a1 addingAttributes:(id)a2 error:(id *)a3;
+ (void)writeAttributes:(id)a0 toURL:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)endSaveWithSuccess:(BOOL)a0 toURL:(id)a1 addingAttributes:(id)a2 error:(id *)a3;
- (id)initForSavingToURL:(id)a0 error:(id *)a1;
- (BOOL)endSaveWithSuccess:(BOOL)a0 addingAttributes:(id)a1 error:(id *)a2;

@end
