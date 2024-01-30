@class NSString, PXUIContentFilterController;

@interface PXPhotosGridFilterContentActionPerformer : PXPhotosGridActionPerformer <UIPopoverPresentationControllerDelegate, PXContentFilterControllerDelegate> {
    PXUIContentFilterController *_contentFilterController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (id)activitySystemImageName;
- (id)activityType;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)contentFilterController:(id)a0 filterStateChanged:(id)a1;
- (id)initWithViewModel:(id)a0 actionType:(id)a1;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (id)contentFilterHiddenTypes;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (void)contentFilterControllerDidComplete:(id)a0;

@end
