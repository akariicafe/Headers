@interface PXPhotosGridToggleAspectFitActionPerformer : PXPhotosGridActionPerformer

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (id)activityType;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (id)barButtonItemWithTarget:(id)a0 action:(SEL)a1;
- (void)performUserInteractionTask;
- (id)activitySystemImageName;

@end
