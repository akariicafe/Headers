@interface ACM2SVHTTPHandler : ACMHTTPAuthenticationHandler

- (BOOL)shouldValidateTGTs;
- (id)convertErrorToACMError:(id)a0;

@end
