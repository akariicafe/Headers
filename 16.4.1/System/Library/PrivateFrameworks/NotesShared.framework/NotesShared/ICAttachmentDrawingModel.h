@class ICDrawing, ICDrawingVersionedDocument;

@interface ICAttachmentDrawingModel : ICAttachmentModel {
    ICDrawingVersionedDocument *_drawingDocument;
}

@property (nonatomic) BOOL observingAttachment;
@property (readonly, nonatomic) ICDrawing *drawing;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)drawingDocument;
- (id)previewImageURL;
- (BOOL)hasPreviews;
- (BOOL)mergeWithMergeableData:(id)a0 mergeableFieldState:(id)a1;
- (long long)previewImageOrientation;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (BOOL)showThumbnailInNoteList;
- (BOOL)supportsQuickLook;
- (void)writeMergeableData;
- (id)saveURL;
- (void)attachmentIsDeallocating:(id)a0;
- (BOOL)canSaveURL;
- (void)drawingPreviewIsUpToDate;
- (BOOL)preferLocalPreviewImages;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (void)startObservingAttachment;
- (void)stopObservingAttachment:(id)a0;

@end
