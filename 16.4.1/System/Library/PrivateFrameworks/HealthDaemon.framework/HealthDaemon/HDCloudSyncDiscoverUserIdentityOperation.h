@class CKUserIdentityLookupInfo, CKUserIdentity;

@interface HDCloudSyncDiscoverUserIdentityOperation : HDCloudSyncOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CKUserIdentityLookupInfo *_identityLookupInfo;
}

@property (readonly, copy, nonatomic) CKUserIdentity *userIdentity;

- (void)main;
- (void).cxx_destruct;
- (void)_unitTest_setUserIdentity:(id)a0;
- (id)initWithConfiguration:(id)a0 identityLookupInfo:(id)a1;

@end
