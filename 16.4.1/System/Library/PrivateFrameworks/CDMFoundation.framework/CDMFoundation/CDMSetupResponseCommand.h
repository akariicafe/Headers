@class NSString;

@interface CDMSetupResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) long long serviceState;
@property (readonly, nonatomic) NSString *serviceName;

- (void).cxx_destruct;
- (id)initWithServiceState:(long long)a0 serviceName:(id)a1;

@end
