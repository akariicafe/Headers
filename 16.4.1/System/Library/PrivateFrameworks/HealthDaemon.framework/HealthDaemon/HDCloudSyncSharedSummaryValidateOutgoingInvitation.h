@class CKUserIdentity;

@interface HDCloudSyncSharedSummaryValidateOutgoingInvitation : HDCloudSyncOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CKUserIdentity *_userIdentity;
}

+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
