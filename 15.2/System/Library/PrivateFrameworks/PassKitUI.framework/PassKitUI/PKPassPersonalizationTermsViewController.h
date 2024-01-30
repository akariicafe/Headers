@class NSString, UITextView;
@protocol PKPassPersonalizationTermsViewControllerDelegate;

@interface PKPassPersonalizationTermsViewController : UIViewController {
    UITextView *_textView;
}

@property (retain, nonatomic) NSString *termsAndConditions;
@property (weak, nonatomic) id<PKPassPersonalizationTermsViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTermsAndConditions:(id)a0;
- (void)_declineButtonPressed:(id)a0;
- (void)_acceptButtonPressed:(id)a0;
- (void)_applyTermsAndConditions;

@end
