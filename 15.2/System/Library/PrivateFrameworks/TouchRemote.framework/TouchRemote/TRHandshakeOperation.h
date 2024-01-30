@interface TRHandshakeOperation : TROperation

@property (nonatomic) long long protocolVersion;

- (void)execute;
- (void)_handleResponse:(id)a0;

@end
