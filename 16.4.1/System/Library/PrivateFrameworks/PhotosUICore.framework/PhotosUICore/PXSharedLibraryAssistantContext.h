@class NSMutableDictionary, PXSharedLibraryLegacyDevicesFallbackMonitor, NSString, PXSharedLibraryFaceTileImageProvider, PXSharedLibraryLegacyDevicesRemoteController, PXSharedLibraryAssistantViewModel;
@protocol PXSharedLibrary;

@interface PXSharedLibraryAssistantContext : NSObject <PXChangeObserver, PXAssistantContext> {
    PXSharedLibraryFaceTileImageProvider *_faceTileImageProvider;
}

@property (readonly, nonatomic) NSMutableDictionary *stepContextIdentifiersToContexts;
@property (readonly, nonatomic) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor;
@property (readonly, nonatomic) PXSharedLibraryLegacyDevicesRemoteController *legacyDevicesRemoteController;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibrary;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_reviewContextIdentifierForMode:(long long)a0 hasPreview:(BOOL)a1;
+ (id)replyAssistantContextWithSharedLibrary:(id)a0 legacyDevicesFallbackMonitor:(id)a1;
+ (id)setupAssistantContextWithSharedLibrary:(id)a0 sourceLibraryInfo:(id)a1 legacyDevicesFallbackMonitor:(id)a2;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void).cxx_destruct;
- (id)_cameraStepContextWithIdentifier:(id)a0;
- (id)_dateSelectionStepContextWithIdentifier:(id)a0;
- (id)_firstVisibleStepContextIdentifierIgnoringPreview:(BOOL)a0;
- (id)_howToStepContextWithIdentifier:(id)a0;
- (id)_initWithSharedLibrary:(id)a0 sourceLibraryInfo:(id)a1 legacyDevicesFallbackMonitor:(id)a2 legacyDevicesRemoteController:(id)a3 mode:(long long)a4;
- (id)_legacyDeviceStepContextIdentifierOrNextContextIdentifier:(id)a0;
- (id)_legacyDevicesFallbackStepContextWithIdentifier:(id)a0;
- (id)_nextContextIdentifierForSelectedPolicy:(long long)a0;
- (id)_nextStepContextIdentifierFromStepContextIdentifier:(id)a0;
- (id)_participantsStepContextWithIdentifier:(id)a0;
- (id)_peopleSelectionStepContextWithIdentifier:(id)a0;
- (id)_replyIntroStepContextWithIdentifier:(id)a0;
- (id)_reviewParticipantsSetupDirectStepContextWithIdentifier:(id)a0;
- (id)_reviewParticipantsSetupPreviewStepContextWithIdentifier:(id)a0;
- (id)_reviewParticipantsSetupStepContextWithIdentifier:(id)a0;
- (id)_reviewReplyDirectStepContextWithIdentifier:(id)a0;
- (id)_reviewReplyPreviewStepContextWithIdentifier:(id)a0;
- (id)_reviewReplyStepContextWithIdentifier:(id)a0;
- (id)_rulesStepContextWithIdentifier:(id)a0;
- (id)_setupIntroStepContextWithIdentifier:(id)a0;
- (id)_summaryStepContextWithIdentifier:(id)a0;
- (void)_updateCombinedImage;
- (void)_updateParticipantsInFaceTile;
- (void)configureParticipantListForStepContext:(id)a0 isReviewStep:(BOOL)a1;
- (id)initialStepContextIdentifiers;
- (id)nextStepContextIdentifierFromStepContextIdentifier:(id)a0;
- (void)setAssistantTraitCollection:(id)a0;
- (id)sharedLibraryStepContextForStepContextIdentifier:(id)a0;
- (BOOL)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(id)a0;
- (id)stepContextForStepContextIdentifier:(id)a0;
- (void)stepContextWithIdentifier:(id)a0 confirmCancellationWithAlertProperties:(id /* block */)a1;
- (void)willCancelAssistant;

@end
