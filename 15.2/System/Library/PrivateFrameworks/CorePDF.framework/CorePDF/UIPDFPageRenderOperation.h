@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {
    BOOL executing;
    BOOL finished;
}

@property (retain) UIPDFPageRenderJob *job;

- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isExecuting;
- (void)completeOperation;
- (void)main;
- (void)dealloc;
- (id)initWithJob:(id)a0;

@end
