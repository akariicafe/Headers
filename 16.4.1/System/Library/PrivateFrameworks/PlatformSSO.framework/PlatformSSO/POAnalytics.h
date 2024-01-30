@interface POAnalytics : NSObject

+ (void)analyticsForLoginConfiguration:(id)a0;
+ (void)analyticsForLoginManager:(id)a0;
+ (void)analyticsForLoginType:(id)a0 result:(id)a1;
+ (void)analyticsForPasswordChange:(BOOL)a0 credentialNeeded:(BOOL)a1 result:(BOOL)a2;
+ (void)analyticsForRegistrationType:(id)a0 options:(unsigned long long)a1 result:(long long)a2;
+ (void)analyticsForStatus;
+ (void)analyticsForTestMessages;

@end
