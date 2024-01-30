@class NSArray;

@interface PKAccountWebServicePaymentsResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *payments;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 account:(id)a1;

@end
