@class NSOperationQueue, MPModelLibraryDeleteEntityChangeRequest;

@interface MPModelLibraryDeleteEntityChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) MPModelLibraryDeleteEntityChangeRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;
- (void)_handlePersistentID:(long long)a0 modelClass:(Class)a1 mediaLibrary:(id)a2;
- (void)_deleteItems:(id)a0 withLibrary:(id)a1;
- (BOOL)_isCloudLibraryEnabled;

@end
