@class NSArray, NSString, NSMutableSet, LSApplicationWorkspace;

@interface HMDApplicationRegistry : HMFObject <HMFLogging, LSApplicationWorkspaceObserverProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_applications;
    LSApplicationWorkspace *_workspace;
}

@property (readonly, copy) NSArray *applications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedRegistry;

- (void)applicationsDidInstall:(id)a0;
- (id)applicationInfoForBundleIdentifier:(id)a0;
- (void)dealloc;
- (id)init;
- (void)applicationsDidUninstall:(id)a0;
- (void).cxx_destruct;
- (id)applicationInfoForBundleURL:(id)a0;

@end
