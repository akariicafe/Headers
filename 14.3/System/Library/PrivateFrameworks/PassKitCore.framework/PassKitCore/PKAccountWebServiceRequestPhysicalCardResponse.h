@class PKPhysicalCard;

@interface PKAccountWebServiceRequestPhysicalCardResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKPhysicalCard *physicalCard;
@property (readonly, nonatomic) unsigned long long shipmentQuoteMinimum;
@property (readonly, nonatomic) unsigned long long shipmentQuoteMaximum;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
