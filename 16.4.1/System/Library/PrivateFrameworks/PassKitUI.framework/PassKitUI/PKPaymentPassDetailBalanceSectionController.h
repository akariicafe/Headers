@class NSString, PKCurrencyAmount;
@protocol PKPaymentPassDetailWrapperSectionControllerDelegate;

@interface PKPaymentPassDetailBalanceSectionController : PKPaymentPassDetailSectionController

@property (weak, nonatomic) id<PKPaymentPassDetailWrapperSectionControllerDelegate> delegate;
@property (retain, nonatomic) PKCurrencyAmount *balance;
@property (retain, nonatomic) NSString *footerText;

+ (BOOL)validForPaymentPass:(id)a0;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (id)titleForFooterInSectionIdentifier:(id)a0;

@end
