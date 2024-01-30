@class NSNumber, NSDate;

@interface PKPaymentWebServicePaginatedRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSNumber *pageOffset;
@property (copy, nonatomic) NSNumber *limit;

- (void).cxx_destruct;

@end
