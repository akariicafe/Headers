@class NSURLSession, HKClinicalProviderSearchResultsPage, NSError, NSURLRequest;

@interface HDCPSSearchOperation : NSOperation

@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) NSURLSession *session;
@property (copy, nonatomic) HKClinicalProviderSearchResultsPage *page;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)main;
- (id)initWithRequest:(id)a0 session:(id)a1;

@end
