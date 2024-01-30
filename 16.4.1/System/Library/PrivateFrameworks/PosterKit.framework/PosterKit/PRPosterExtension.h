@class NSUUID, NSString, RBSProcessIdentity, NSData, LSApplicationExtensionRecord, NSOperationQueue, PRUpdatingService, NSBundle, _EXExtensionIdentity, LSPropertyList;

@interface PRPosterExtension : NSObject <PRPosterExtensionDescribing> {
    NSUUID *_uuid;
    LSApplicationExtensionRecord *_record;
    NSOperationQueue *_refreshConfigurationQueue;
    NSOperationQueue *_reloadDescriptorsQueue;
    PRUpdatingService *_lock_assetUpdater;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) _EXExtensionIdentity *identity;
@property (readonly, nonatomic) RBSProcessIdentity *pr_processIdentity;
@property (readonly, nonatomic) NSString *pr_posterExtensionBundleIdentifier;
@property (readonly, nonatomic) NSString *pr_localizedName;
@property (readonly, nonatomic) NSString *pr_posterExtensionContainerBundleIdentifier;
@property (readonly, nonatomic) LSPropertyList *pr_posterExtensionInfoPlist;
@property (readonly, nonatomic) LSPropertyList *pr_posterExtensionEntitlementsPlist;
@property (readonly, nonatomic) NSData *pr_persistentIdentifier;
@property (readonly, nonatomic) NSBundle *pr_posterExtensionBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionWithIdentity:(id)a0;

- (void)clearUpdatingServiceForReason:(id)a0;
- (void)pr_addReloadDescriptorOperation:(id)a0;
- (id)pr_assetUpdaterWithError:(id *)a0;
- (void)pr_addRefreshConfigurationOperation:(id)a0 waitUntilFinished:(BOOL)a1;
- (id)_initWithIdentity:(id)a0 processIdentity:(id)a1;
- (id)pr_refreshConfigurationOperations;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)pr_reloadDescriptorOperations;
- (id)applicationExtensionRecord;
- (void)invalidate;
- (void).cxx_destruct;

@end
