@class PKPassEntitlementsComposer;
@protocol PKPassEntitlementTimeSectionControllerDelegate;

@interface PKPassEntitlementTimeSectionController : PKPassShareSectionController {
    unsigned long long _mode;
    PKPassEntitlementsComposer *_entitlementComposer;
    id<PKPassEntitlementTimeSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)_summaryForTimeConfiguration:(id)a0 isUsingAdvancedSchedules:(BOOL)a1;
- (id)decorateListCell:(id)a0 forRowItem:(id)a1;
- (id)initWithMode:(unsigned long long)a0 entitlementComposer:(id)a1 delegate:(id)a2;
- (void)reloadItemsAnimated:(BOOL)a0;

@end
