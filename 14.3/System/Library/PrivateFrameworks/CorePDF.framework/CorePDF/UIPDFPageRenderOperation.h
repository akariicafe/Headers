@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {
    BOOL executing;
    BOOL finished;
}

@property (retain) UIPDFPageRenderJob *job;

- (id)initWithJob:(id)a0;
- (void)dealloc;
- (void)main;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)completeOperation;
- (void)start;
- (BOOL)isConcurrent;

@end
