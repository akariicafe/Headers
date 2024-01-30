@class NSString, NSDictionary;

@interface CDMXPCConnectionUpdateCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDictionary *payload;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithClientId:(id)a0 type:(long long)a1;
- (id)initWithClientId:(id)a0 type:(long long)a1 payload:(id)a2;

@end
