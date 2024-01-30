@class PHPhotoLibrary, NSOperationQueue;

@interface PHPersonResetManager : NSObject {
    PHPhotoLibrary *_library;
    NSOperationQueue *_resetOperationQueue;
}

@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) BOOL requiresPhotoAnalysisReset;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)dealloc;
- (void)resetPersonsWithCompletionHandler:(id /* block */)a0;
- (void)resetPersons:(id)a0 completionHandler:(id /* block */)a1;

@end
