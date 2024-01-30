@class NSString, PXUIContentFilterController;

@interface PXCuratedLibraryFilterActionPerformer : PXCuratedLibraryActionPerformer <PXContentFilterControllerDelegate, UIPopoverPresentationControllerDelegate> {
    PXUIContentFilterController *_contentFilterController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activitySystemImageName;
- (id)activityType;
- (BOOL)performerResetsAfterCompletion;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)contentFilterController:(id)a0 filterStateChanged:(id)a1;
- (id)initWithActionType:(id)a0 viewModel:(id)a1;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void)contentFilterControllerDidComplete:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;

@end
