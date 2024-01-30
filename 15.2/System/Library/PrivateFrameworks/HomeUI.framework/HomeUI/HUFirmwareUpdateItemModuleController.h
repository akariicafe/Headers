@class HUFirmwareUpdateItemModule, NSMapTable, NSString;
@protocol HUExpandableTextViewCellDelegate;

@interface HUFirmwareUpdateItemModuleController : HUItemTableModuleController <HULockupViewDelegate>

@property (readonly, nonatomic) HUFirmwareUpdateItemModule *module;
@property (readonly, nonatomic) NSMapTable *expandedStateByItems;
@property (weak, nonatomic) id<HUExpandableTextViewCellDelegate> expandableTextViewCellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canSelectItem:(id)a0;
- (void).cxx_destruct;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (void)lockupView:(id)a0 downloadControlTapped:(id)a1;
- (void)lockupView:(id)a0 expandableTextViewDidExpand:(id)a1;
- (id)initWithModule:(id)a0 expandableTextViewCellDelegate:(id)a1;

@end
