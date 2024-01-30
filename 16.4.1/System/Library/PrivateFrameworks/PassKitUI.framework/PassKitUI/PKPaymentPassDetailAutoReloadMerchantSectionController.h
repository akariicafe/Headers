@class PKPaymentPass;
@protocol PKPaymentPassDetailAutoReloadMerchantSectionControllerDelegate;

@interface PKPaymentPassDetailAutoReloadMerchantSectionController : PKPaymentPassDetailSectionController {
    PKPaymentPass *_pass;
    BOOL _isAutoTopEnabled;
}

@property (weak, nonatomic) id<PKPaymentPassDetailAutoReloadMerchantSectionControllerDelegate> delegate;

+ (BOOL)validForPaymentPass:(id)a0;

- (void).cxx_destruct;
- (id)initWithPass:(id)a0 delegate:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (id)titleForHeaderInSectionIdentifier:(id)a0;

@end
