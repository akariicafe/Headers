@interface ACM2SVHTTPHandler : ACMHTTPAuthenticationHandler

- (id)convertErrorToACMError:(id)a0;
- (BOOL)shouldValidateTGTs;

@end
