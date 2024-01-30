@class PKFamilyMember, PKPeerPaymentAccount, PKPaymentPass, NSArray, NSString;
@protocol PKPaymentPassActionWidgetViewDelegate;

@interface PKPaymentPassActionWidgetView : UIView {
    NSArray *_displayableWidgets;
    NSString *_phoneNumber;
    NSString *_website;
    NSString *_email;
    unsigned long long _widgetViewStyle;
    BOOL _usesAccessibilityLayout;
    unsigned long long _numberOfWidgetsPerRow;
}

@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (weak, nonatomic) id<PKPaymentPassActionWidgetViewDelegate> delegate;
@property (retain, nonatomic) PKFamilyMember *currentUser;

- (unsigned long long)numberOfRows;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithWidgetViewStyle:(unsigned long long)a0;
- (double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)a0 rowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })widgetBoundsForRowWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateNumberOfWidgetsPerRow;
- (double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)a0;
- (BOOL)hasSingleColumnLayout;
- (void)cleanUpExistingWidgets;
- (id)_createButtonForTitle:(id)a0 image:(id)a1;
- (id)_titleForAddMoneyWidgetForActions:(id)a0;
- (void)updateUseAccessibilityLayout;
- (void)updateWidgetsAccessibilityLayoutState;
- (unsigned long long)numberOfWidgetsPerRowWithSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)numberOfRowsWithWidgetsPerRow:(unsigned long long)a0;
- (void)_determineWidgetContentWithAvailableWidgets;
- (double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)a0 rowSize:(struct CGSize { double x0; double x1; })a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
