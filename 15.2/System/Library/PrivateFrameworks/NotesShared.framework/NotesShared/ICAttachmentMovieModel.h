@interface ICAttachmentMovieModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (BOOL)hasThumbnailImage;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (void)updateFileBasedAttributes;
- (void)addLocation;
- (void)updateAttachmentSize;

@end
