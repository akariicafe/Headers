@class NSString;

@interface SRTCCStorePassThrough : NSObject <SRTCCStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bundleIdentifiersForService:(id)a0;
- (id)bundleIdentifiersDisabledForService:(id)a0;
- (BOOL)isOverriddenForService:(id)a0;
- (id)informationForBundleId:(id)a0;
- (BOOL)setOverride:(BOOL)a0 forService:(id)a1;
- (BOOL)resetService:(id)a0;
- (BOOL)resetService:(id)a0 forBundleId:(id)a1;
- (BOOL)setValue:(BOOL)a0 forService:(id)a1 bundleId:(id)a2;

@end
