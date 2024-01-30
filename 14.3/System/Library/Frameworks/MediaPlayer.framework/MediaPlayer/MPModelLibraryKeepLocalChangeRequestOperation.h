@class MPModelLibraryKeepLocalChangeRequest, NSOperationQueue;

@interface MPModelLibraryKeepLocalChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) MPModelLibraryKeepLocalChangeRequest *request;

- (void).cxx_destruct;
- (void)execute;
- (void)_handlePersistentID:(long long)a0 modelClass:(Class)a1 keepLocal:(long long)a2 mediaLibrary:(id)a3;
- (void)_handleKeepLocalUpdateStatus:(long long)a0 forLibraryIdentifier:(long long)a1 mediaType:(long long)a2 completedWithError:(id)a3;

@end
