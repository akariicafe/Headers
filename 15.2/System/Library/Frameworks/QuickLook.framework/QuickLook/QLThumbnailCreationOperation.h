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

- (void)setFinished:(BOOL)a0;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (void)_finishWithError:(id)a0;
- (void)_finish;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (void).cxx_destruct;
- (void)setExecuting:(BOOL)a0;
- (BOOL)_finishIfCancelled;
- (void)retrieveThumbnailForTaggedLogicalURL:(id)a0;
- (void)updateLastHitDateOfAddition:(id)a0 onPhysicalURL:(id)a1;

@end
