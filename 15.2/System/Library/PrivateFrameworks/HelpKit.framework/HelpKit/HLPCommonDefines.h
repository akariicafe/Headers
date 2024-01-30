@interface HLPCommonDefines : NSObject

+ (id)userName;
+ (void)setAuthenticationContext:(id)a0;
+ (id)clientID;
+ (id)contentRequestHeaderFields;
+ (id)assetRequestHeaderFields;
+ (BOOL)hasServiceTicket;
+ (id)contentServiceTicket;
+ (id)assetServiceTicket;

@end
