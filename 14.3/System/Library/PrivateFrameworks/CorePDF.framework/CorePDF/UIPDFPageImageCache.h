@class NSOperationQueue, UIPDFDocument;

@interface UIPDFPageImageCache : NSObject {
    unsigned long long _jobCount;
    id *_jobsPrioritized;
    unsigned long long _nextJobIndex;
    id *_jobsByPage;
    NSOperationQueue *_renderQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int jobsComplete;
}

@property (readonly) UIPDFDocument *document;
@property (readonly) unsigned long long pageCount;
@property (readonly) unsigned long long lookAhead;
@property (readonly) double lookAheadResolution;

- (void)clearCache;
- (void)dealloc;
- (id)initWithDocument:(id)a0;
- (void)didReceiveMemoryWarning:(id)a0;
- (int)getRenderQueueJobsCount;
- (id)initWithDocument:(id)a0 cacheCount:(unsigned long long)a1 lookAhead:(unsigned long long)a2 withLookAheadResolution:(double)a3;
- (id)getImageIfAvailableForPage:(unsigned long long)a0;
- (void)deliverImageOfPage:(unsigned long long)a0 maxSize:(struct CGSize { double x0; double x1; })a1 quality:(BOOL *)a2 receiver:(id)a3 selector:(SEL)a4 info:(id)a5;
- (void)addRenderJob:(id)a0;
- (void)cacheImageOfPage:(unsigned long long)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
- (void)cancelPendingRenderOperations;
- (void)cancelPendingRenderOperationsForTarget:(id)a0;

@end
