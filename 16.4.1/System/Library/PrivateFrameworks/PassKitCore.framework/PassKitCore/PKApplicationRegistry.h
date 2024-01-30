@class NSString, NSMutableSet, NSURL, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKApplicationRegistry : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSMutableSet *_registeredBundleIdentifiers;
    NSURL *_archiveFileURL;
    NSObject<OS_dispatch_semaphore> *_archiveSemaphore;
    NSObject<OS_dispatch_queue> *_applicationRegistryQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)applicationsDidUninstall:(id)a0;
- (void).cxx_destruct;
- (void)_validateRegisteredApplications;
- (void)_requestArchiveToDisk;
- (BOOL)applicationIsRegisteredWithBundleIdentifier:(id)a0;
- (id)initWithArchiveFileURL:(id)a0;
- (BOOL)registerApplicationWithBundleIdentifier:(id)a0;

@end
