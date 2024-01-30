@class NSData, NSURL;

@interface IMSaveReviewService : IMBaseStoreService

@property (retain, nonatomic) NSData *bodyData;
@property (retain, nonatomic) NSURL *endpointURL;

- (id)urlRequest;
- (void).cxx_destruct;
- (void)performDataRequestWithCompletion:(id /* block */)a0;
- (id)generatedEndpointURLForBaseURL:(id)a0;
- (id)initWithEndpointURL:(id)a0 bodyData:(id)a1;

@end
