@class NSString;

@interface IMFetchReviewService : IMBaseStoreService

@property (retain, nonatomic) NSString *adamID;

- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAdamID:(id)a0;
- (void)performDataRequestWithCompletion:(id /* block */)a0;

@end
