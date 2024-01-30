@class NSOperationQueue, MPModelLibraryRequest;

@interface MPModelLibraryRequestOperation : MPAsyncOperation

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSOperationQueue *serialAccessQueue;
@property (copy, nonatomic) MPModelLibraryRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void)_sanityCheckRequest;
- (id)_sectionProperties;
- (id)_itemProperties;
- (void).cxx_destruct;
- (void)_executeLegacyRequest;
- (id)_libraryView;
- (void)_executeRequest;

@end
