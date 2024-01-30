@class NSOperationQueue, NSManagedObjectContext;

@interface ICNotePreviewGenerator : NSObject

@property (class, readonly, nonatomic) ICNotePreviewGenerator *sharedGenerator;

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSManagedObjectContext *workerContext;
@property (nonatomic, getter=isSuspended) BOOL suspended;

- (void).cxx_destruct;
- (id)init;
- (void)fetchPreviewImageForNote:(id)a0 minSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 cache:(id)a3 cacheKey:(id)a4 completionBlock:(id /* block */)a5;
- (void)fetchPreviewImageForNote:(id)a0 minSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 appearanceInfo:(id)a3 cache:(id)a4 cacheKey:(id)a5 completionBlock:(id /* block */)a6;
- (id)previewURLForNote:(id)a0;
- (id)renderPreviewImageForNote:(id)a0 minSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 appearanceInfo:(id)a3 cache:(id)a4 cacheKey:(id)a5;
- (id)drawingAttachmentAtStartOfNote:(id)a0;
- (void)fetchPreviewImageForNote:(id)a0 minSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 completionBlock:(id /* block */)a3;
- (id)previewImageForNote:(id)a0 minSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 appearanceInfo:(id)a3;
- (void)previewImageWithDrawingAttachment:(id)a0 minSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 appearanceInfo:(id)a3 cache:(id)a4 cacheKey:(id)a5 completionBlock:(id /* block */)a6;

@end
