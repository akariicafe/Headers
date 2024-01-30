@class NSString, UITextView;
@protocol PKPassPersonalizationTermsViewControllerDelegate;

@interface PKPassPersonalizationTermsViewController : UIViewController {
    UITextView *_textView;
}

@property (retain, nonatomic) NSString *termsAndConditions;
@property (weak, nonatomic) id<PKPassPersonalizationTermsViewControllerDelegate> delegate;

- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_acceptButtonPressed:(id)a0;
- (void)_applyTermsAndConditions;
- (void)_declineButtonPressed:(id)a0;
- (id)initWithTermsAndConditions:(id)a0;

@end
