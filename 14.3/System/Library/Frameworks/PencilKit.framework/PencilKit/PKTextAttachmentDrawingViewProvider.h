@interface PKTextAttachmentDrawingViewProvider : NSTextAttachmentViewProvider

+ (void)didInsertDrawingAttachment:(id)a0;
+ (void)registerViewProviderClassIfNecessary;

- (void)loadView;

@end
