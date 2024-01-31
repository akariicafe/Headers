@class CNDonationStore, CNUIExternalComponentsFactory;

@interface CNContactIgnoreDonatedInformationAction : CNContactAction

@property (readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory;
@property (readonly, nonatomic) CNDonationStore *donationStore;

- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 donationStore:(id)a1 componentsFactory:(id)a2;
- (void)performActionWithSender:(id)a0;
- (BOOL)rejectAllDonations;
- (void)showRejectionFailureAlert;

@end
