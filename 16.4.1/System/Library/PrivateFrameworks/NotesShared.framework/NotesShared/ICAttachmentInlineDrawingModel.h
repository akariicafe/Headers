@class PKDrawing;

@interface ICAttachmentInlineDrawingModel : ICAttachmentModel

@property (readonly, nonatomic) PKDrawing *handwritingRecognitionDrawing;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (BOOL)hasPreviews;
- (id)newDrawingFromMergeableData;
- (void)setHandwritingRecognitionDrawing:(id)a0;
- (BOOL)showThumbnailInNoteList;
- (id)additionalIndexableTextContentInNote;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)a0;
- (BOOL)isIncludedInGenericAttachmentCount;
- (BOOL)preferLocalPreviewImages;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)providesStandaloneTitleForNote;
- (id)searchableTextContentInNote;
- (BOOL)shouldShowInContentInfoText;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (id)standaloneTitleForNote;

@end
