@class NSString, NSDate;

@interface ACMHTTPAuthenticationHandler : ACMHTTPHandler {
    NSString *_policyVersion;
    NSDate *_startInvocationDate;
}

@property (readonly, nonatomic) NSString *policyVersion;
@property (readonly, nonatomic) NSString *realm;

- (id)initWithContext:(id)a0;
- (id)requestBody;
- (BOOL)shouldReturnResponse:(id)a0 orReportError:(id *)a1;
- (BOOL)shouldValidateTGTs;

@end
