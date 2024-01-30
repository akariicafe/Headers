@class NSDate, NSNumber, PKPaginatedWebServiceResponse;

@interface PKPaymentWebServicePaginatedRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaginatedWebServiceResponse *lastPageResponse;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSNumber *limit;

- (void).cxx_destruct;

@end
