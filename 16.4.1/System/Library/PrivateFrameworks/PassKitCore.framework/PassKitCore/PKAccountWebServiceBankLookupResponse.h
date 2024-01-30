@class NSString;

@interface PKAccountWebServiceBankLookupResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) BOOL success;
@property (readonly, copy, nonatomic) NSString *displayName;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
