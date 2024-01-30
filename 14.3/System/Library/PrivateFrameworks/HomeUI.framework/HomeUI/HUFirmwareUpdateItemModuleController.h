@class HUFirmwareUpdateItemModule, NSMapTable, NSString;

@interface HUFirmwareUpdateItemModuleController : HUItemTableModuleController <HULockupViewDelegate>

@property (readonly, nonatomic) HUFirmwareUpdateItemModule *module;
@property (readonly, nonatomic) NSMapTable *expandedStateByItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)canSelectItem:(id)a0;
- (id)initWithModule:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (void)lockupView:(id)a0 downloadControlTapped:(id)a1;
- (void)lockupView:(id)a0 expandableTextViewDidExpand:(id)a1;

@end
