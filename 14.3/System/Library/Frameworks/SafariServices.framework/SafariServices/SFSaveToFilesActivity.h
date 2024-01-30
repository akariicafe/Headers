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
- (void).cxx_destruct;
- (BOOL)_managesOwnPresentation;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)saveToFilesOperation:(id)a0 presentViewController:(id)a1;
- (void)saveToFilesOperation:(id)a0 didFinishWithSuccess:(BOOL)a1;
- (BOOL)saveToFilesOperationSupportsDownloads:(id)a0;
- (id)customizationControllerForSaveToFilesOperation:(id)a0;
- (BOOL)saveToFilesOperationShouldDismissViewControllerAfterCompletion:(id)a0;
- (id)initWithActivityItemProviderCollection:(id)a0 customizationController:(id)a1;

@end
