@class OBPrivacyLinkController;

@interface PKPaymentSetupPrivacyLinkSectionController : PKPaymentSetupListSectionController

@property (retain, nonatomic) OBPrivacyLinkController *privacyLink;

- (id)init;
- (void).cxx_destruct;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
