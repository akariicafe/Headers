@class NSString;

@interface SRTCCStorePassThrough : NSObject <SRTCCStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (BOOL)resetService:(id)a0;
- (BOOL)setValue:(BOOL)a0 forService:(id)a1 bundleId:(id)a2;
- (BOOL)setOverride:(BOOL)a0 forService:(id)a1;
- (id)bundleIdentifiersForService:(id)a0;
- (id)bundleIdentifiersDisabledForService:(id)a0;
- (BOOL)resetService:(id)a0 forBundleId:(id)a1;
- (void)requestAccessForService:(id)a0 completion:(id /* block */)a1;
- (BOOL)isOverriddenForService:(id)a0;
- (id)informationForBundleId:(id)a0;
- (BOOL)checkAccessForService:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (long long)preflightAuthorizationStatusForService:(id)a0;

@end
