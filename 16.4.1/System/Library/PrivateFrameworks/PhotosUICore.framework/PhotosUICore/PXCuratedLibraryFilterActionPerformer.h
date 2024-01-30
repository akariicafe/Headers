@class NSString, PXUIFilterController;

@interface PXCuratedLibraryFilterActionPerformer : PXCuratedLibraryActionPerformer <PXFilterControllerDelegate, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) PXUIFilterController *filterController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (id)activitySystemImageName;
- (void)filterController:(id)a0 libraryFilterStateChanged:(id)a1;
- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)contentFilterHiddenTypesForFilterController:(id)a0;
- (id)libraryFilterHiddenTypesForFilterController:(id)a0;
- (void)filterControllerDidClose:(id)a0;
- (void)performUserInteractionTask;
- (BOOL)performerResetsAfterCompletion;
- (void)filterController:(id)a0 contentFilterStateChanged:(id)a1;
- (void).cxx_destruct;
- (BOOL)_isAlreadyDone;

@end
