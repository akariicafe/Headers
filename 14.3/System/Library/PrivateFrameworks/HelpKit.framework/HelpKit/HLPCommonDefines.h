@interface HLPCommonDefines : NSObject

+ (id)clientID;
+ (void)setAuthenticationContext:(id)a0;
+ (id)userName;
+ (id)contentRequestHeaderFields;
+ (id)assetRequestHeaderFields;
+ (BOOL)hasServiceTicket;
+ (id)contentServiceTicket;
+ (id)assetServiceTicket;

@end
