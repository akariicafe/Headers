@interface ICAttachmentPDFModel : ICAttachmentModel

+ (id)contentTextFromPDFAtURL:(id)a0;
+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (BOOL)canMarkup;
- (id)searchableTextContent;
- (BOOL)hasPreviews;

@end
