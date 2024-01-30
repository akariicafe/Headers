@class NSString, NSMapTable, HUAccessoryDebugModule;

@interface HUAccessoryDebugModuleController : HUItemTableModuleController <HUSwitchCellDelegate>

@property (retain) NSMapTable *cellToItemMap;
@property (readonly, nonatomic) HUAccessoryDebugModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canSelectItem:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (id)initWithModule:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;

@end
