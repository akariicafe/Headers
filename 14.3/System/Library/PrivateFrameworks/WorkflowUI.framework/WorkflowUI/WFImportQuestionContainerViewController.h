@class OBWelcomeController, NSString;
@protocol WFImportQuestionContainerViewControllerDelegate;

@interface WFImportQuestionContainerViewController : UIViewController <WFGalleryImportQuestionViewDelegate>

@property (retain, nonatomic) OBWelcomeController *welcomeController;
@property (weak, nonatomic) id<WFImportQuestionContainerViewControllerDelegate> delegate;
@property (nonatomic) BOOL backButtonHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)keyboardWillChange:(id)a0;
- (void)didTapCancel;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)galleryImportQuestionViewDidUpdateContentSize:(id)a0;
- (id)initWithImportQuestion:(id)a0 isLastQuestion:(BOOL)a1 backButtonHidden:(BOOL)a2;
- (id)welcomeControllerForImportQuestion:(id)a0 isLastQuestion:(BOOL)a1;
- (void)didTapBack;
- (void)didTapNext;
- (void)didTapSkip;

@end
