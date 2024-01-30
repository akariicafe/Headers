@interface ICAttachmentPDFModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;
+ (id)contentTextFromPDFAtURL:(id)a0;

- (BOOL)hasPreviews;
- (id)searchableTextContent;
- (BOOL)canMarkup;

@end
