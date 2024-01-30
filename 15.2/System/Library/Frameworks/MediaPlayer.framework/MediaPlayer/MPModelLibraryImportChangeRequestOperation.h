@class NSOperationQueue, MPModelLibraryImportChangeRequest;

@interface MPModelLibraryImportChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) MPModelLibraryImportChangeRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;

@end
