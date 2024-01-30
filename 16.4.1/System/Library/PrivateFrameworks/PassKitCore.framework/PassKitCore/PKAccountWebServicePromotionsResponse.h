@class NSArray, NSNumber, NSDate;

@interface PKAccountWebServicePromotionsResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) NSArray *promotions;
@property (readonly, nonatomic) NSArray *orderings;
@property (readonly, nonatomic) NSDate *lastAddedDate;
@property (readonly, nonatomic) NSNumber *minRefreshPeriod;
@property (readonly, nonatomic) NSNumber *maxImpressionCount;
@property (readonly, nonatomic) NSNumber *timeVisibleAfterCompleted;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
