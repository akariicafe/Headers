@class PKVirtualCard;

@interface PKAccountWebServiceVirtualCardResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKVirtualCard *virtualCard;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
