@class NSOperationQueue, MPModelLibraryRequest;

@interface MPModelLibraryRequestOperation : MPAsyncOperation

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSOperationQueue *serialAccessQueue;
@property (copy, nonatomic) MPModelLibraryRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)_libraryView;
- (id)_sectionProperties;
- (void)_executeLegacyRequest;
- (id)_itemProperties;
- (void)_executeRequest;
- (void)_sanityCheckRequest;

@end
