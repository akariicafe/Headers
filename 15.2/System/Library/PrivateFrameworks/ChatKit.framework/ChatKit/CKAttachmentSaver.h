@class NSMutableArray;

@interface CKAttachmentSaver : NSObject {
    unsigned long long _errorCount;
    NSMutableArray *_attachments;
}

- (void)_pop;
- (void)_saveNextAttachment;
- (void)_saveCompletionForVideoWithPath:(id)a0 error:(id)a1 context:(void *)a2;
- (void)popAndSaveNextAttachment;
- (void)_saveCompletionForImage:(id)a0 error:(id)a1 context:(void *)a2;
- (void)_saveCompletion:(id)a0;
- (id)initWithAttachments:(id)a0;
- (void)runToCompletion;
- (void).cxx_destruct;

@end
