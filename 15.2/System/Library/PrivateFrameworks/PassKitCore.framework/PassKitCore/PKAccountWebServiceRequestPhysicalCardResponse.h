@class PKPhysicalCard;

@interface PKAccountWebServiceRequestPhysicalCardResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKPhysicalCard *physicalCard;
@property (readonly, nonatomic) unsigned long long shipmentQuoteMinimum;
@property (readonly, nonatomic) unsigned long long shipmentQuoteMaximum;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
