@class PHPhotoLibrary;

@interface PHAMediaAnalysisdTurboJob : PHAWorkerJob {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PHPhotoLibrary *_library;
    int _requestId;
    BOOL _complete;
}

- (BOOL)finished;
- (void).cxx_destruct;
- (void)requestCompleted;
- (float)completionScore;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 library:(id)a2;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;

@end
