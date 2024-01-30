@class NSArray, PKAccount, NSString;
@protocol PKAccountSupportTopicsSectionControllerDelegate;

@interface PKAccountSupportTopicsSectionController : PKPaymentSetupListSectionController {
    id<PKAccountSupportTopicsSectionControllerDelegate> _delegate;
    PKAccount *_account;
    NSArray *_topics;
    NSString *_sectionTitle;
}

- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)_decorateListCell:(id)a0 forRowItem:(id)a1;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithAccount:(id)a0 topics:(id)a1 sectionTitle:(id)a2 delegate:(id)a3;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;

@end
