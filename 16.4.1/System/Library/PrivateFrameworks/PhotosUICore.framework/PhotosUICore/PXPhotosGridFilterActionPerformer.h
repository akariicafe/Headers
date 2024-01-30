@class NSString, PXUIFilterController;

@interface PXPhotosGridFilterActionPerformer : PXPhotosGridActionPerformer <UIAdaptivePresentationControllerDelegate, PXFilterControllerDelegate>

@property (retain, nonatomic) PXUIFilterController *filterController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (void)presentationControllerDidDismiss:(id)a0;
- (id)activitySystemImageName;
- (void)filterController:(id)a0 libraryFilterStateChanged:(id)a1;
- (id)activityType;
- (id)contentFilterHiddenTypesForFilterController:(id)a0;
- (id)libraryFilterHiddenTypesForFilterController:(id)a0;
- (void)filterControllerDidClose:(id)a0;
- (void)performUserInteractionTask;
- (void)filterController:(id)a0 contentFilterStateChanged:(id)a1;
- (void).cxx_destruct;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
