@class NSString, UIColor;
@protocol PKPaymentPassDetailContactSupportSectionControllerDelegate;

@interface PKPaymentPassDetailContactSupportSectionController : PKPaymentPassDetailSectionController

@property (weak, nonatomic) id<PKPaymentPassDetailContactSupportSectionControllerDelegate> delegate;
@property (nonatomic) unsigned long long contactOption;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) NSString *footerText;

+ (BOOL)validForPaymentPass:(id)a0;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (id)titleForFooterInSectionIdentifier:(id)a0;

@end
