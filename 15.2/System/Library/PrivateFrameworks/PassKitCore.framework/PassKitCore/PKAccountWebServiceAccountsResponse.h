@class NSArray, PKFeatureFailureCollection, NSString;

@interface PKAccountWebServiceAccountsResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) PKFeatureFailureCollection *featureFailures;
@property (readonly, copy, nonatomic) NSString *lastUpdated;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
