@class NSString, NSUUID, LSApplicationWorkspace, NSExtension;

@interface CRKInstructorExtensionProxy : NSObject <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace *mWorkspace;
    NSExtension *mInstructorExtension;
    NSUUID *mContextIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedExtensionProxy;

- (void)applicationInstallsDidStart:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)fetchListenerEndpointForExtensionBundleIdentifier:(id)a0 fromClassroomBundleWithURL:(id)a1 completionBlock:(id /* block */)a2;
- (void)beginExtensionRequestWithCompletionBlock:(id /* block */)a0;
- (void)configureInstructorExtensionAfterFetchError:(id)a0 completionBlock:(id /* block */)a1;
- (id)extensionAttributesForExtensionIdentifier:(id)a0 containingAppURL:(id)a1;
- (void)resetExtension;
- (void)establishEndpointWithCompletionBlock:(id /* block */)a0;
- (BOOL)proxiesContainClassroomApp:(id)a0;
- (void)fetchListenerEndpointWithCompletionBlock:(id /* block */)a0;

@end
