@class NSOperationQueue, MPStoreLibraryPersonalizationRequest;

@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) MPStoreLibraryPersonalizationRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

+ (id)personalizedResponseForContentDescriptor:(id)a0 requestedProperties:(id)a1;

- (void)execute;
- (void)cancel;
- (void).cxx_destruct;

@end
