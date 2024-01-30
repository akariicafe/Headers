@class NSString, PXUIFilterController;

@interface PXCuratedLibraryFilterActionPerformer : PXCuratedLibraryActionPerformer <PXFilterControllerDelegate, UIAdaptivePresentationControllerDelegate> {
    PXUIFilterController *_filterController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (void)filterController:(id)a0 contentFilterStateChanged:(id)a1;
- (void)presentationControllerDidDismiss:(id)a0;
- (BOOL)performerResetsAfterCompletion;
- (void).cxx_destruct;
- (void)filterControllerDidComplete:(id)a0;
- (long long)libraryTypeForFilterController:(id)a0;
- (id)contentFilterHiddenTypesForFilterController:(id)a0;
- (id)initWithActionType:(id)a0 viewModel:(id)a1;
- (void)performUserInteractionTask;
- (id)activitySystemImageName;

@end
