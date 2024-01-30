@class VSViewModel, IKViewElement, NSString, NSError, IKAppDocument;
@protocol VSAppDocumentControllerDelegate;

@interface VSAppDocumentController : NSObject <IKAppDocumentDelegate>

@property (retain, nonatomic) IKAppDocument *appDocument;
@property (retain, nonatomic) VSViewModel *viewModel;
@property (retain, nonatomic) NSError *viewModelError;
@property (retain, nonatomic) IKViewElement *templateElement;
@property (weak, nonatomic) id<VSAppDocumentControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)documentDidUpdate:(id)a0;
- (void)documentNeedsUpdate:(id)a0;
- (BOOL)document:(id)a0 evaluateStyleMediaQuery:(id)a1;
- (void)_stopObservingViewModel:(id)a0;
- (void)_startObservingViewModel:(id)a0;
- (id)initWithAppDocument:(id)a0;
- (id)_imageItemProviderWithImageElement:(id)a0;
- (id)_newViewModel;
- (void)_notiftyDidUpdateViewModel:(id)a0;
- (void)_notiftyDidFailToUpdateViewModelWithError:(id)a0;
- (BOOL)_updateViewModel:(id)a0 WithError:(id *)a1;

@end
