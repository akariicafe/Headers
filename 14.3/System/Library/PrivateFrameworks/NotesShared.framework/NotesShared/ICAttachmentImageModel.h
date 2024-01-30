@interface ICAttachmentImageModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void)updateFileBasedAttributes;
- (BOOL)supportsOCR;
- (BOOL)canMarkup;
- (struct CGSize { double x0; double x1; })sizeByCroppingSize:(struct CGSize { double x0; double x1; })a0;
- (id)saveURL;
- (BOOL)canSaveURL;
- (long long)previewImageOrientation;
- (id)previewImageTypeUTI;
- (void)addLocation;
- (BOOL)hasThumbnailImage;
- (BOOL)supportsImageClassification;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (BOOL)needsFullSizePreview;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (void)updateAttachmentSize;
- (BOOL)shouldCropImage;
- (BOOL)supportsQuickLook;
- (id)previewItemTitle;

@end
