@class NSString;

@interface ICNoteFileFormat : NSObject

@property (class, readonly, nonatomic) NSString *pathExtension;
@property (class, readonly, nonatomic) NSString *fileUTType;

+ (BOOL)importNoteFromURL:(id)a0 toNote:(id)a1 error:(id *)a2;
+ (void)exportNote:(id)a0 toURL:(id)a1;

- (id)allowedFileTypes;
- (BOOL)canHandleFileURL:(id)a0;
- (void)cancelParsing;
- (void)parseFileURL:(id)a0 newNoteBlock:(id /* block */)a1 updatedNoteBlock:(id /* block */)a2 errorBlock:(id /* block */)a3 completedParsingBlock:(id /* block */)a4;
- (void)totalNotesFoundAtFileURL:(id)a0 completionBlock:(id /* block */)a1;

@end
