@class LSPropertyList;

@interface __HMDBundleApplicationInfo : HMDApplicationInfo {
    LSPropertyList *_entitlements;
}

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithRecord:(id)a0;
- (BOOL)isEntitledForSPIAccess;
- (BOOL)isEntitledForAPIAccess;

@end
