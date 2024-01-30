@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {
    BOOL executing;
    BOOL finished;
}

@property (retain) UIPDFPageRenderJob *job;

- (void)completeOperation;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (BOOL)isConcurrent;
- (void)dealloc;
- (void)start;
- (id)initWithJob:(id)a0;

@end
