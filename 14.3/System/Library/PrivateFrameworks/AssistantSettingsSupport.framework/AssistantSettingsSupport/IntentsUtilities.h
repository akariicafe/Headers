@interface IntentsUtilities : NSObject

+ (void)intentsAppsWithCompletion:(id /* block */)a0;
+ (void)setAccess:(BOOL)a0 appID:(id)a1;
+ (id)fetchEnabledAppIds;
+ (id)_displayNameForApp:(id)a0;
+ (BOOL)isIntentsEnabledForAppId:(id)a0;

@end
