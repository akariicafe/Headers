@class PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) long long actionZoomLevel;

- (id)activitySystemImageName;
- (id)activityType;
- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 viewModel:(id)a1;
- (id)initWithActionType:(id)a0;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;

@end
