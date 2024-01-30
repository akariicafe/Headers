@interface HLPCommonDefines : NSObject

+ (id)userName;
+ (id)clientID;
+ (BOOL)isInternalBuild;
+ (void)setAuthenticationContext:(id)a0;
+ (id)assetRequestHeaderFields;
+ (id)assetServiceTicket;
+ (id)contentRequestHeaderFields;
+ (id)contentServiceTicket;
+ (BOOL)hasServiceTicket;

@end
