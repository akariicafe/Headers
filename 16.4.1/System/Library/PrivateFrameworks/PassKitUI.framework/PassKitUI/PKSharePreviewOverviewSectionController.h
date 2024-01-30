@class PKPassEntitlementsComposer, NSArray, PKPassShareInitiationContext;
@protocol PKSharePreviewOverviewSectionControllerDelegate;

@interface PKSharePreviewOverviewSectionController : PKPassShareSectionController {
    unsigned long long _mode;
    PKPassEntitlementsComposer *_entitlementComposer;
    NSArray *_recipientItems;
    NSArray *_entitlementItems;
}

@property (readonly, weak, nonatomic) id<PKSharePreviewOverviewSectionControllerDelegate> delegate;
@property (retain, nonatomic) PKPassShareInitiationContext *context;

- (id)init;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)sharedEntitlements;
- (id)_initWithMode:(unsigned long long)a0 entitlementComposer:(id)a1 context:(id)a2 delegate:(id)a3;
- (id)_localizedEntitlementSummary;
- (void)_shareabilitySwitchValueChanged:(id)a0;
- (id)decorateListCell:(id)a0 forRowItem:(id)a1;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithInitiationContext:(id)a0 entitlementComposer:(id)a1 delegate:(id)a2;
- (id)initWithMode:(unsigned long long)a0 entitlementComposer:(id)a1 delegate:(id)a2;
- (void)reloadItemsAnimated:(BOOL)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
