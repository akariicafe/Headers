@class NSString, NSData, NSURL, NSArray, NSHashTable;
@protocol HMFLocking;

@interface HMDApplicationInfo : HMFObject <HMFLogging> {
    id<HMFLocking> _lock;
    NSHashTable *_processes;
}

@property (class, readonly) NSData *privateVendorIdentifier;

@property (readonly, getter=isIndependent) BOOL independent;
@property (readonly) HMDApplicationInfo *companionApplicationInfo;
@property (readonly, copy) NSData *vendorIdentifier;
@property (readonly, getter=isInstalled) BOOL installed;
@property (readonly, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess;
@property (readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) NSURL *bundleURL;
@property (readonly) HMDApplicationInfo *hostApplicationInfo;
@property (readonly, copy) NSArray *processes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)applicationInfoForBundleIdentifier:(id)a0;
+ (id)applicationInfoForBundleURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)attributeDescriptions;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addProcess:(id)a0;
- (void)removeProcess:(id)a0;
- (id)logIdentifier;
- (id)clientIdentifierSalt:(id *)a0;

@end
