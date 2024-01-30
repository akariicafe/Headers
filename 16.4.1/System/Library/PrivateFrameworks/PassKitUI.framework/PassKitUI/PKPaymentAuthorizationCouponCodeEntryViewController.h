@class UIStackView, NSString, UITextField, NSError, UIScrollView, UIView;
@protocol PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate;

@interface PKPaymentAuthorizationCouponCodeEntryViewController : UIViewController <UITextFieldDelegate> {
    NSString *_couponCode;
    BOOL _awaitingCouponCodeUpdate;
    NSError *_firstError;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    UITextField *_textField;
    UIView *_accessoryView;
    BOOL _active;
    BOOL _finishing;
}

@property (readonly, nonatomic) long long style;
@property (weak, nonatomic) id<PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)keyboardWillHide:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)updatePreferredContentSize;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)keyboardDidShow:(id)a0;
- (id)canonicalizedText;
- (void)clearAccessoryView;
- (BOOL)isPaymentStyle;
- (BOOL)isViewTranslucent;
- (void)reloadDataItem;
- (void)setAccessoryViewToActivityIndicator;
- (void)setAccessoryViewToCheckmark;
- (void)setAccessoryViewToError:(id)a0;
- (BOOL)shouldUpdatePreferredContentSize;
- (void)textFieldDidEditingChanged:(id)a0;
- (void)updateAccessoryView;

@end
