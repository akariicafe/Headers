@class HFCharacteristicTriggerBuilder, UINavigationItem, NSString;
@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerServicePickerContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate>

@property (retain, nonatomic) HFCharacteristicTriggerBuilder *characteristicTriggerBuilder;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) unsigned long long source;
@property (readonly, nonatomic) UINavigationItem *effectiveNavigationItem;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_next:(id)a0;
- (void)_cancel:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)viewDidLoad;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (id)layoutOptionsForSection:(long long)a0;
- (BOOL)serviceGridItemManager:(id)a0 shouldHideItem:(id)a1;
- (id)initWithServiceGridItemManager:(id)a0;
- (void)didChangeSelection;
- (BOOL)canSelectItem:(id)a0 indexPath:(id)a1;
- (id)initWithCharacteristicTriggerBuilder:(id)a0 mode:(unsigned long long)a1 source:(unsigned long long)a2 effectiveNavigationItem:(id)a3 delegate:(id)a4;
- (void)_validateNextButton;
- (void)_addCharacteristicEventsForAlarmItem:(id)a0;
- (void)_addCharacteristicEventsForOtherDeviceItem:(id)a0;

@end
