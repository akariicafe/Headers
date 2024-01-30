@class PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) long long actionZoomLevel;

- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)initWithActionType:(id)a0;
- (id)initWithActionType:(id)a0 viewModel:(id)a1;
- (id)activitySystemImageName;

@end
