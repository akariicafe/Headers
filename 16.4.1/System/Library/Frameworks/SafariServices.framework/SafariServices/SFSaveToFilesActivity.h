@class _SFSaveToFilesOperation, NSString, _SFActivityItemCustomizationController, UIViewController;

@interface SFSaveToFilesActivity : _SFActivity <_SFSaveToFilesOperationDelegate> {
    _SFSaveToFilesOperation *_operation;
    UIViewController *_presenterViewController;
    id /* block */ _presentationCompletionHandler;
    BOOL _presentAnimated;
    _SFActivityItemCustomizationController *_customizationController;
    UIViewController *_presentedViewController;
}

@property (nonatomic) BOOL supportsDownloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (BOOL)saveToFilesOperationSupportsDownloads:(id)a0;
- (void)saveToFilesOperation:(id)a0 didFinishWithSuccess:(BOOL)a1;
- (void).cxx_destruct;
- (void)saveToFilesOperation:(id)a0 presentViewController:(id)a1;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_managesOwnPresentation;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithActivityItemProviderCollection:(id)a0 customizationController:(id)a1;
- (BOOL)saveToFilesOperationShouldDismissViewControllerAfterCompletion:(id)a0;
- (id)customizationControllerForSaveToFilesOperation:(id)a0;

@end
