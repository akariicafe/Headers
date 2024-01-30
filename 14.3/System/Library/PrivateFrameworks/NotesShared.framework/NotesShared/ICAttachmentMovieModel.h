@interface ICAttachmentMovieModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void)updateFileBasedAttributes;
- (void)addLocation;
- (BOOL)hasThumbnailImage;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (void)updateAttachmentSize;

@end
