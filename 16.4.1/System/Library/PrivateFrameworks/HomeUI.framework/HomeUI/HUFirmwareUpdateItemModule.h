@class HMHome, HUFirmwareUpdateItemProvider;

@interface HUFirmwareUpdateItemModule : HFItemModule

@property (retain, nonatomic) HUFirmwareUpdateItemProvider *firmwareUpdateItemProvider;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (id)transformedUpdateOutcomeForItem:(id)a0 proposedOutcome:(id)a1;

@end
