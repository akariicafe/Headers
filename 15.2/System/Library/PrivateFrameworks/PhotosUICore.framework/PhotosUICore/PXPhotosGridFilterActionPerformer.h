@class NSString, PXUIFilterController;

@interface PXPhotosGridFilterActionPerformer : PXPhotosGridActionPerformer <UIAdaptivePresentationControllerDelegate, PXFilterControllerDelegate> {
    PXUIFilterController *_filterController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (id)activityType;
- (void)filterController:(id)a0 contentFilterStateChanged:(id)a1;
- (void)presentationControllerDidDismiss:(id)a0;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)filterControllerDidComplete:(id)a0;
- (long long)libraryTypeForFilterController:(id)a0;
- (id)contentFilterHiddenTypesForFilterController:(id)a0;
- (void)performUserInteractionTask;
- (id)activitySystemImageName;
- (id)initWithViewModel:(id)a0 actionType:(id)a1;

@end
