@class NSOperationQueue, MPModelLibraryImportChangeRequest;

@interface MPModelLibraryImportChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) MPModelLibraryImportChangeRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;

@end
