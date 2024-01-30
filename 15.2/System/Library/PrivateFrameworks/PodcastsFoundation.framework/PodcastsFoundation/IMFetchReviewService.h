@class NSString;

@interface IMFetchReviewService : IMBaseStoreService

@property (retain, nonatomic) NSString *adamID;

- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithAdamID:(id)a0;
- (void)performDataRequestWithCompletion:(id /* block */)a0;

@end
