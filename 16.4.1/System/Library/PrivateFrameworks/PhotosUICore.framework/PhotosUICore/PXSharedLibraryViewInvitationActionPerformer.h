@class NSString, PXSharedLibraryLegacyDevicesFallbackMonitor;
@protocol PXSharedLibrary;

@interface PXSharedLibraryViewInvitationActionPerformer : PXActionPerformer <PXAssistantControllerDelegate>

@property (retain, nonatomic) id<PXSharedLibrary> invitation;
@property (retain, nonatomic) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUserInteractionTask;
- (id)init;
- (void).cxx_destruct;
- (void)assistantController:(id)a0 completedWithError:(id)a1;
- (void)performActionWithInvitation:(id)a0 legacyDevicesFallbackMonitor:(id)a1 presentationEnvironment:(id)a2 completionHandler:(id /* block */)a3;

@end
