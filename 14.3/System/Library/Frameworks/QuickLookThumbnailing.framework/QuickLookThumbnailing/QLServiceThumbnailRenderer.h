@class QLFileThumbnailRequest, QLThumbnailReply;
@protocol QLThumbnailServiceSurfaceGeneratorProtocol;

@interface QLServiceThumbnailRenderer : NSObject

@property (retain, nonatomic) QLFileThumbnailRequest *request;
@property (retain, nonatomic) QLThumbnailReply *reply;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) id<QLThumbnailServiceSurfaceGeneratorProtocol> surfaceGenerator;

- (void).cxx_destruct;
- (void)_thumbnailGenerationDidFailWithError:(id)a0;
- (void)_didReceiveThumbnailURL:(id)a0;
- (void)_drawInContextOfSize:(struct CGSize { double x0; double x1; })a0 drawingBlock:(id /* block */)a1;
- (void)_drawInCurrentContextOfSize:(struct CGSize { double x0; double x1; })a0 drawingBlock:(id /* block */)a1;
- (void)_drawInIOSurface;
- (BOOL)_canCreateContextOfSize:(struct CGSize { double x0; double x1; })a0 forRequest:(id)a1;
- (id)_thumbnailDataDestructionConcurrenQueue;
- (void)_didGenerateThumbnailWithData:(id)a0 drawingContextSize:(struct CGSize { double x0; double x1; })a1;
- (void)_executeCompletionHandlerWithThumbnailData:(id)a0 thumbnailURL:(id)a1 ioSurface:(id)a2 drawingContextSize:(struct CGSize { double x0; double x1; })a3 didGenerateThumbnail:(BOOL)a4 error:(id)a5;
- (struct CGSize { double x0; double x1; })_IOSurfaceSizeFromThumbnailReply:(id)a0;
- (id)initWithRequest:(id)a0 reply:(id)a1 completionHandler:(id /* block */)a2 surfaceGenerator:(id)a3;
- (void)generateThumbnailAndPerformCompletionHandler;

@end
