@class ICNote;
@protocol ICAttachmentInsertionDelegate;

@interface ICAttachmentInsertionController : NSObject

@property (readonly, weak, nonatomic) ICNote *note;
@property (weak, nonatomic) id<ICAttachmentInsertionDelegate> attachmentDelegate;

- (void)addAttachment:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithNote:(id)a0;
- (void)addAttachment:(id)a0 atTextLocation:(unsigned long long)a1;
- (void)addAttachment:(id)a0 atTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_addInlineAttachment:(id)a0 inTextStorage:(id)a1 atTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)addInlineAttachment:(id)a0 atTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addInlineAttachment:(id)a0 atTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textView:(id)a2;

@end
