@class PUCompositeVideoGenerator, NSString, PXAlertController, AVAssetExportSession, UIViewController;

@interface PUCompositeVideoActivity : PXActivity <PXChangeObserver>

@property (retain, nonatomic) UIViewController *presenterViewController;
@property (retain, nonatomic) PXAlertController *progressController;
@property (retain, nonatomic) PUCompositeVideoGenerator *generator;
@property (retain, nonatomic) AVAssetExportSession *exportSession;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (id)activityViewController;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)_exportGeneratedVideo;
- (void)_sucessfullyFinishedSaving:(BOOL)a0 error:(id)a1;
- (void)_finishWithSuccess:(BOOL)a0 cancelled:(BOOL)a1;

@end
