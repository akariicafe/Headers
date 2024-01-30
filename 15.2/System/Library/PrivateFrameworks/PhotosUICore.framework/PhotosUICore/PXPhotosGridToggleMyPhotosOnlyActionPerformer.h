@interface PXPhotosGridToggleMyPhotosOnlyActionPerformer : PXPhotosGridActionPerformer

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (id)activityType;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (void)performUserInteractionTask;
- (id)activitySystemImageName;

@end
