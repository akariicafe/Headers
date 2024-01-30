@class NSString;
@protocol SearchUIFirstTimeExperienceDelegate;

@interface SearchUIFirstTimeExperienceViewController : UIViewController <UITextViewDelegate>

@property (nonatomic) unsigned long long supportedDomains;
@property (retain, nonatomic) NSString *explanationText;
@property (retain, nonatomic) NSString *learnMoreText;
@property (retain, nonatomic) NSString *continueButtonTitle;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (weak, nonatomic) id<SearchUIFirstTimeExperienceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (id)initWithSupportedDomains:(unsigned long long)a0 explanationText:(id)a1 learnMoreText:(id)a2 continueButtonTitle:(id)a3;
- (void)continueButtonPressed;
- (id)initWithStyle:(unsigned long long)a0 supportedDomains:(unsigned long long)a1 explanationText:(id)a2 learnMoreText:(id)a3 continueButtonTitle:(id)a4;
- (void)makeViews;
- (void)showPrivacyView;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;

@end
