@interface ICAttachmentImageModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)previewItemTitle;
- (BOOL)hasThumbnailImage;
- (id)saveURL;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (long long)previewImageOrientation;
- (BOOL)canSaveURL;
- (id)previewImageTypeUTI;
- (void)updateFileBasedAttributes;
- (void)addLocation;
- (BOOL)supportsOCR;
- (BOOL)supportsImageClassification;
- (BOOL)needsFullSizePreview;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (BOOL)canMarkup;
- (void)updateAttachmentSize;
- (BOOL)shouldCropImage;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (BOOL)supportsQuickLook;
- (struct CGSize { double x0; double x1; })sizeByCroppingSize:(struct CGSize { double x0; double x1; })a0;

@end
