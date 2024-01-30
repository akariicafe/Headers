@class ICInlineAttachment;

@interface ICInlineTextAttachment : ICAbstractTextAttachment

@property (retain, nonatomic) ICInlineAttachment *attachment;

+ (id)textAttachmentWithAttachment:(id)a0;
+ (Class)textAttachmentClassForAttachment:(id)a0;

- (BOOL)isUnsupported;
- (Class)attachmentViewClass;
- (id)altText;
- (id)initWithAttachment:(id)a0;
- (id)attachmentInContext:(id)a0;
- (id)inlineAttachmentInContext:(id)a0;
- (id)attachmentIdentifier;
- (id)attachmentUTI;
- (id)newlyCreatedView;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0 styleAttributes:(id)a1;

@end
