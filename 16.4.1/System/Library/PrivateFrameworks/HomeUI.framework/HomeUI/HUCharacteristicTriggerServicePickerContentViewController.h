@class NAFuture, NSString, HFEventTriggerBuilder, UINavigationItem, HFCharacteristicEventBuilderItem;
@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerServicePickerContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate>

@property (retain, nonatomic) NAFuture *characteristicReadFuture;
@property (readonly, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) unsigned long long source;
@property (readonly, nonatomic) UINavigationItem *effectiveNavigationItem;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getThresholdRangeValueForCharacteristics:(id)a0 inHome:(id)a1;
+ (id)splitCharacteristicResults;
+ (id /* block */)transformationSetBlock;

- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)_next:(id)a0;
- (void)_cancel:(id)a0;
- (id)initWithServiceGridItemManager:(id)a0;
- (void)_addCharacteristicEventsForAlarmItem:(id)a0;
- (void)_addCharacteristicEventsForOtherDeviceItem:(id)a0;
- (void)_addTriggerValue:(id)a0 forCharacteristics:(id)a1;
- (void)_validateNextButton;
- (BOOL)canSelectItem:(id)a0 indexPath:(id)a1;
- (void)didChangeSelection;
- (id)initWithTriggerBuilder:(id)a0 eventBuilderItem:(id)a1 mode:(unsigned long long)a2 source:(unsigned long long)a3 effectiveNavigationItem:(id)a4 delegate:(id)a5;
- (void)itemManagerDidUpdate:(id)a0;
- (id)layoutOptionsForSection:(long long)a0;
- (BOOL)serviceGridItemManager:(id)a0 shouldHideItem:(id)a1;

@end
