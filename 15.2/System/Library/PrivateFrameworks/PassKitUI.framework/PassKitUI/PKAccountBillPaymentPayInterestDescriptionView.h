@class NSDate, NSString, UITextView, NSNumberFormatter, NSDateFormatter, PKAccount, NSDecimalNumber, UILabel;
@protocol PKAccountBillPaymentPayInterestDescriptionViewDelegate;

@interface PKAccountBillPaymentPayInterestDescriptionView : UIView <UITextViewDelegate> {
    UILabel *_estimatedChargeLabel;
    UITextView *_cancellationView;
    UILabel *_interestLabel;
    NSDateFormatter *_productDateFormatter;
    NSDateFormatter *_localDateFormatter;
    NSDateFormatter *_localTimeFormatter;
    PKAccount *_account;
    NSNumberFormatter *_amountFormatter;
    NSString *_learnMoreString;
    NSDate *_cancellationDate;
}

@property (copy, nonatomic) NSDecimalNumber *interest;
@property (copy, nonatomic) NSDate *interestChargeDate;
@property (copy, nonatomic) NSDate *selectedPaymentDate;
@property (weak, nonatomic) id<PKAccountBillPaymentPayInterestDescriptionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithAccount:(id)a0;
- (void)_updateLabels;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)_showInterest;
- (id)_learnMoreAttributedStringWithText:(id)a0;

@end
