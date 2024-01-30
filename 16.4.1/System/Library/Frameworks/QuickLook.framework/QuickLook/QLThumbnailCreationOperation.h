@class UIImage, NSError, NSURL, NSOperationQueue;

@interface QLThumbnailCreationOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
    NSOperationQueue *_operationQueue;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (retain) UIImage *image;
@property (retain) NSError *error;
@property (retain) NSURL *documentURL;
@property double maximumDimension;
@property double scaleFactor;
@property unsigned long long useMode;
@property BOOL generateIfNeeded;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)_finish;
- (void)setExecuting:(BOOL)a0;
- (BOOL)isConcurrent;
- (void)_finishWithError:(id)a0;
- (void)start;
- (void)setFinished:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_finishIfCancelled;
- (void)updateLastHitDateOfAddition:(id)a0 onPhysicalURL:(id)a1;
- (void)retrieveThumbnailForTaggedLogicalURL:(id)a0;

@end
