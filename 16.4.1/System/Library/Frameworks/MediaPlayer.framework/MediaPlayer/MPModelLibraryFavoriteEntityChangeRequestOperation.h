@class NSOperationQueue, MPModelLibraryFavoriteEntityChangeRequest;

@interface MPModelLibraryFavoriteEntityChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
    BOOL _canRerunRequest;
}

@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) MPModelLibraryFavoriteEntityChangeRequest *request;

- (void)execute;
- (void).cxx_destruct;
- (void)_runLibraryMappingRequestWithIdentifiers:(id)a0 class:(Class)a1 completionHandler:(id /* block */)a2;
- (void)_runRequestWithIdentifiers:(id)a0 persistentID:(long long)a1 favoriteState:(long long)a2 class:(Class)a3;
- (void)_setFavoriteState:(long long)a0 forEntityWithPersistentID:(long long)a1 modelClass:(Class)a2;
- (id)importFromRequestIdentifiers:(id)a0;

@end
