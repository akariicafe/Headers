@class NSSet, NSDictionary, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, VGOEMApplicationFinderUpdates;

@interface VGOEMApplicationFinder : NSObject <LSApplicationWorkspaceObserverProtocol, GEOConfigChangeListenerDelegate, VGOEMApplicationFinding> {
    NSSet *_requiredIntents;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSSet *disabledAppIdentifiers;
@property (retain, nonatomic) NSDictionary *whitelist;
@property (retain, nonatomic) NSMutableDictionary *applications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VGOEMApplicationFinderUpdates> delegate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_addOEMApplicationForApplicationRecordIfNeeded:(id)a0;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)dealloc;
- (BOOL)_removeOEMApplicationForBundleIdentifier:(id)a0;
- (id)_applicationRecordForBundleIdentifier:(id)a0;
- (void)findOEMApplications;
- (void)applicationsDidUninstall:(id)a0;
- (id)_whitelistPayload;
- (void)applicationsDidInstall:(id)a0;

@end
