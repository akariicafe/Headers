@class NSString;

@interface MRPromptForRouteAuthorizationResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *response;

- (unsigned long long)type;
- (id)initWithResponse:(id)a0;

@end
