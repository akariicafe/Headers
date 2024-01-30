@class ICDrawing, ICDrawingVersionedDocument;

@interface ICAttachmentDrawingModel : ICAttachmentModel {
    ICDrawingVersionedDocument *_drawingDocument;
}

@property (nonatomic) BOOL observingAttachment;
@property (readonly, nonatomic) ICDrawing *drawing;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)saveURL;
- (BOOL)canSaveURL;
- (long long)previewImageOrientation;
- (BOOL)mergeWithMergeableData:(id)a0;
- (void)writeMergeableData;
- (id)initWithAttachment:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (id)previewImageURL;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)hasPreviews;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)preferLocalPreviewImages;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (BOOL)showThumbnailInNoteList;
- (void)attachmentIsDeallocating:(id)a0;
- (BOOL)supportsQuickLook;
- (void)startObservingAttachment;
- (void)stopObservingAttachment:(id)a0;
- (id)drawingDocument;
- (void)drawingPreviewIsUpToDate;
- (id)previewItemTitle;
- (id)previewItemURL;

@end
