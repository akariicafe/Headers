@interface ICAttachmentWebModel : ICAttachmentModel

@property (copy) id /* block */ pendingFetchCompletionHandler;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;

@end
