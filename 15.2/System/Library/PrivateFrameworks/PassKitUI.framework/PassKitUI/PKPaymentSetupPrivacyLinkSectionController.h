@class OBPrivacyLinkController;

@interface PKPaymentSetupPrivacyLinkSectionController : PKPaymentSetupListSectionController

@property (retain, nonatomic) OBPrivacyLinkController *privacyLink;

- (void).cxx_destruct;
- (id)init;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;

@end
