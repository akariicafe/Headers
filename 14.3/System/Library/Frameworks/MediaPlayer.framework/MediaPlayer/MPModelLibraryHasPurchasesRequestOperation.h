@class MPModelLibraryHasPurchasesRequest;

@interface MPModelLibraryHasPurchasesRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPModelLibraryHasPurchasesRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;

@end
