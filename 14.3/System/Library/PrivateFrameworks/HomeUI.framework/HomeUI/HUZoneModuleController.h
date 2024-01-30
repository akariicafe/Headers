@class HUEditableTextCell, HMRoom, HFZoneModule, HUTitleValueCell, NSString;

@interface HUZoneModuleController : HUItemTableModuleController <UITextFieldDelegate>

@property (retain, nonatomic) HMRoom *room;
@property (weak, nonatomic) HUTitleValueCell *currentZoneItemCell;
@property (weak, nonatomic) HUEditableTextCell *createNewZoneCell;
@property (readonly, nonatomic) HFZoneModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)canSelectItem:(id)a0;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (unsigned long long)didSelectItem:(id)a0;
- (void)accessoryButtonTappedForItem:(id)a0;
- (void)_configureCurrentZonesItem:(id)a0 forCell:(id)a1 animated:(BOOL)a2;
- (void)_configureZoneBuilderItem:(id)a0 forCell:(id)a1 animated:(BOOL)a2;
- (void)_configureZoneItem:(id)a0 forCell:(id)a1 animated:(BOOL)a2;
- (void)_configureCreateNewZoneItem:(id)a0 forCell:(id)a1 animated:(BOOL)a2;
- (id)_didSelectZoneItem:(id)a0;
- (id)_didSelectZoneBuilderItem:(id)a0;
- (void)_updateCreateNewZoneCellText:(BOOL)a0;
- (BOOL)_validateNewZoneName:(id)a0;
- (id)_createNewZoneWithName:(id)a0;
- (id)initWithModule:(id)a0 room:(id)a1;
- (id)finishZoneNameEditing;

@end
