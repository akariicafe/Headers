@class PHPhotoLibrary, NSOperationQueue;

@interface PHPersonResetManager : NSObject {
    PHPhotoLibrary *_library;
    NSOperationQueue *_resetOperationQueue;
}

@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) BOOL requiresPhotoAnalysisReset;

- (id)initWithPhotoLibrary:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resetPersons:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetPersonsWithCompletionHandler:(id /* block */)a0;
- (void)waitUntilResetIsComplete;

@end
