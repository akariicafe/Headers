@class NSString;

@interface CKVDonateDefaultAuthorization : NSObject <CKVDonateAuthorization>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_getItemClassesForSiriKitApp;
+ (id)_getItemClassToKnownAppsMap;

- (BOOL)isItemClassWhitelisted:(Class)a0 forOriginApp:(id)a1;

@end
