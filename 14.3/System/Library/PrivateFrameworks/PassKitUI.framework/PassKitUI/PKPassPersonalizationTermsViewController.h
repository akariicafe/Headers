@class NSString, UITextView;
@protocol PKPassPersonalizationTermsViewControllerDelegate;

@interface PKPassPersonalizationTermsViewController : UIViewController {
    UITextView *_textView;
}

@property (retain, nonatomic) NSString *termsAndConditions;
@property (weak, nonatomic) id<PKPassPersonalizationTermsViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (id)initWithTermsAndConditions:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_declineButtonPressed:(id)a0;
- (void)_acceptButtonPressed:(id)a0;
- (void)_applyTermsAndConditions;
- (void)viewDidLoad;

@end
