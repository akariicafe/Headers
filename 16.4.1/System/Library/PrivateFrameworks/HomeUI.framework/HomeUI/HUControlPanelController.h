@class NSSet, NSMutableDictionary, NSMutableSet, NSString;
@protocol HUControlPanelControllerDelegate;

@interface HUControlPanelController : NSObject <HUControlViewDelegate>

@property (readonly, nonatomic) NSSet *configurations;
@property (readonly, nonatomic) NSMutableDictionary *interactionStateByControlID;
@property (readonly, weak, nonatomic) id<HUControlPanelControllerDelegate> delegate;
@property (readonly, nonatomic) NSMutableSet *allItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldShowSectionFooterForItem:(id)a0;
- (id)_configurationForItem:(id)a0;
- (id)_controlItemForControlView:(id)a0;
- (id)_controlPanelItemForControlView:(id)a0;
- (id)_createConfigurations;
- (id)_createWriteThrottleForControlItem:(id)a0 controlPanelItem:(id)a1;
- (void)_updateStateForControlView:(id)a0 controlPanelItem:(id)a1;
- (void)_updateWriteStateForControlItem:(id)a0 controlPanelItem:(id)a1;
- (void)_updateWriteStateForControlView:(id)a0;
- (id)_valueTransformerForControlItem:(id)a0 controlPanelItem:(id)a1;
- (Class)cellClassForItem:(id)a0;
- (void)controlView:(id)a0 valueDidChange:(id)a1;
- (void)controlViewDidBeginUserInteraction:(id)a0;
- (void)controlViewDidEndUserInteraction:(id)a0;
- (id)sectionFooterForItem:(id)a0 forSourceItem:(id)a1;
- (id)sectionTitleForItem:(id)a0 forSourceItem:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (BOOL)shouldDisplayItem:(id)a0;
- (BOOL)shouldShowSectionTitleForItem:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
