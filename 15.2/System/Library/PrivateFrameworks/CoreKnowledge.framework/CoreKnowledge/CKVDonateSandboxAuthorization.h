@class NSString;

@interface CKVDonateSandboxAuthorization : NSObject <CKVDonateAuthorization>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isItemClassWhitelisted:(Class)a0 forOriginApp:(id)a1;

@end
