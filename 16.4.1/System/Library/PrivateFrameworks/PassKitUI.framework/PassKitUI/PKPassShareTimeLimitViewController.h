@class PKPassShareToggleSectionController, PKPassEntitlementsComposerEntry, PKPassEntitlementsComposer, PKPassShareScheduleSectionController;
@protocol PKPassShareTimeLimitViewControllerDelegate;

@interface PKPassShareTimeLimitViewController : PKPaymentSetupOptionsViewController <PKPassShareScheduleSectionControllerDelegate, PKPassShareToggleSectionControllerDelegate> {
    PKPassShareScheduleSectionController *_scheduleSectionController;
    PKPassShareToggleSectionController *_advancedScheduleSectionController;
    PKPassShareToggleSectionController *_entitlementAccessSectionController;
    unsigned long long _mode;
    PKPassEntitlementsComposer *_entitlementComposer;
    PKPassEntitlementsComposerEntry *_entitlementEntry;
    id<PKPassShareTimeLimitViewControllerDelegate> _delegate;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_configureSections;
- (void)_showTimeLimitEditForStartDate:(BOOL)a0 expirationDate:(BOOL)a1;
- (void)didSelectEditEndDate;
- (void)didSelectEditStartDate;
- (id)initWithMode:(unsigned long long)a0 entitlementComposer:(id)a1 entitlementEntry:(id)a2 delegate:(id)a3;
- (void)timeConfigurationDidChange:(id)a0;
- (void)toggle:(id)a0 valueDidChange:(BOOL)a1;

@end
