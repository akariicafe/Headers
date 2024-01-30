@class UITextView, NSString, NSURL, UIButton;

@interface HUAccessoryDiagnosticsConsentViewController : UIViewController <UITextViewDelegate>

@property (retain, nonatomic) UITextView *descriptionTextView;
@property (retain, nonatomic) UIButton *submitButton;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSURL *privacyPolicyURL;
@property (nonatomic) long long consentTextVersion;
@property (retain, nonatomic) NSString *manufacturer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_addConstraints;
- (id)initWithItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelSubmission;
- (void)submitLog;

@end
