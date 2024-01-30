@class NSMutableArray;

@interface CKAttachmentSaver : NSObject {
    unsigned long long _errorCount;
    NSMutableArray *_attachments;
}

- (void)_pop;
- (void).cxx_destruct;
- (void)_saveNextAttachment;
- (void)_saveCompletion:(id)a0;
- (void)_saveCompletionForVideoWithPath:(id)a0 error:(id)a1 context:(void *)a2;
- (void)popAndSaveNextAttachment;
- (void)_saveCompletionForImage:(id)a0 error:(id)a1 context:(void *)a2;
- (id)initWithAttachments:(id)a0;
- (void)runToCompletion;

@end
