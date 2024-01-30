@class CNDonationStore, CNUIExternalComponentsFactory;

@interface CNContactIgnoreDonatedInformationAction : CNContactAction

@property (readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory;
@property (readonly, nonatomic) CNDonationStore *donationStore;

- (id)initWithContact:(id)a0;
- (void)showRejectionFailureAlert;
- (void).cxx_destruct;
- (void)performActionWithSender:(id)a0;
- (id)initWithContact:(id)a0 donationStore:(id)a1 componentsFactory:(id)a2;
- (BOOL)rejectAllDonations;

@end
