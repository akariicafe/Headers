@class NSArray, NSString, NSMutableSet, LSApplicationWorkspace;
@protocol HMFLocking;

@interface HMDApplicationRegistry : HMFObject <HMFLogging, LSApplicationWorkspaceObserverProtocol> {
    id<HMFLocking> _lock;
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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)applicationInfoForBundleIdentifier:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)applicationInfoForBundleURL:(id)a0;

@end
