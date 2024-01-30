@interface IntentsUtilities : NSObject

+ (id)_displayNameForApp:(id)a0;
+ (id)fetchEnabledAppIds;
+ (void)intentsAppsWithCompletion:(id /* block */)a0;
+ (BOOL)isIntentsEnabledForAppId:(id)a0;
+ (void)setAccess:(BOOL)a0 appID:(id)a1;

@end
