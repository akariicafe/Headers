@class HMRoom, UITextField, HFZoneModule, HUEditableTextCollectionListCell, UICollectionViewListCell, NSString;

@interface HUZoneModuleController : HUItemTableModuleController <UITextFieldDelegate>

@property (retain, nonatomic) HMRoom *room;
@property (weak, nonatomic) UICollectionViewListCell *currentZoneItemCell;
@property (weak, nonatomic) HUEditableTextCollectionListCell *createNewZoneCell;
@property (weak, nonatomic) UITextField *editingTextField;
@property (readonly, nonatomic) HFZoneModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (unsigned long long)didSelectItem:(id)a0;
- (Class)collectionCellClassForItem:(id)a0;
- (void)_configureCreateNewZoneItem:(id)a0 forCell:(id)a1;
- (void)_configureCurrentZonesItem:(id)a0 forCell:(id)a1;
- (void)_configureZoneBuilderItem:(id)a0 forCell:(id)a1;
- (void)_configureZoneItem:(id)a0 forCell:(id)a1;
- (id)_didSelectZoneItem:(id)a0;
- (id)_didSelectZoneBuilderItem:(id)a0;
- (void)_updateCreateNewZoneCellText:(BOOL)a0;
- (BOOL)_validateNewZoneName:(id)a0;
- (id)_createNewZoneWithName:(id)a0;
- (id)initWithModule:(id)a0 room:(id)a1;
- (id)finishZoneNameEditing;

@end
