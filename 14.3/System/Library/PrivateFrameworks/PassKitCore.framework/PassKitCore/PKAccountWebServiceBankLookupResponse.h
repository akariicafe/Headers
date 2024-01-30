@class NSString;

@interface PKAccountWebServiceBankLookupResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) BOOL success;
@property (readonly, copy, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
