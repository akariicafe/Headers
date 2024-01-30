@class HMHome, HUFirmwareUpdateItemProvider, NSSet;

@interface HUFirmwareUpdateItemModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HUFirmwareUpdateItemProvider *firmwareUpdateItemProvider;
@property (readonly, nonatomic) HMHome *home;

- (id)itemProviders;
- (void).cxx_destruct;
- (id)initWithItemUpdater:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (void)_reloadItemProviders;
- (id)transformedUpdateOutcomeForItem:(id)a0 proposedOutcome:(id)a1;

@end
