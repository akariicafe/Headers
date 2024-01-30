@class NSArray;

@interface PKAccountWebServicePaymentsResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *payments;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithData:(id)a0 account:(id)a1;

@end
