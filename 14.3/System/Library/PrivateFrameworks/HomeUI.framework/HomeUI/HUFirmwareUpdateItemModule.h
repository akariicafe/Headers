@class HMHome, HUFirmwareUpdateItemProvider, NSSet;

@interface HUFirmwareUpdateItemModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HUFirmwareUpdateItemProvider *firmwareUpdateItemProvider;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)a0;
- (void)_reloadItemProviders;
- (id)transformedUpdateOutcomeForItem:(id)a0 proposedOutcome:(id)a1;

@end
