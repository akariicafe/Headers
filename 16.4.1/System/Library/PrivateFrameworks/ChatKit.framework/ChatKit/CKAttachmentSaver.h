@class NSMutableArray;

@interface CKAttachmentSaver : NSObject {
    unsigned long long _errorCount;
    NSMutableArray *_attachments;
}

- (void).cxx_destruct;
- (void)_pop;
- (void)runToCompletion;
- (void)_saveCompletion:(id)a0;
- (void)_saveCompletionForImage:(id)a0 error:(id)a1 context:(void *)a2;
- (void)_saveCompletionForVideoWithPath:(id)a0 error:(id)a1 context:(void *)a2;
- (void)_saveNextAttachment;
- (id)initWithAttachments:(id)a0;
- (void)popAndSaveNextAttachment;

@end
