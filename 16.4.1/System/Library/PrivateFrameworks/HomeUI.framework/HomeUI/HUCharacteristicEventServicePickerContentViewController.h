@class NSString, HFEventTriggerBuilder, HUEventUIFlow, HFCharacteristicEventBuilderItem;
@protocol HUCharacteristicEventServicePickerContentViewControllerDelegate;

@interface HUCharacteristicEventServicePickerContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate, HUEventUIFlowViewController>

@property (retain, nonatomic) HUEventUIFlow *flow;
@property (retain, nonatomic) NSString *stepIdentifier;
@property (readonly, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) unsigned long long source;
@property (weak, nonatomic) id<HUCharacteristicEventServicePickerContentViewControllerDelegate> servicePickerDelegate;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)splitCharacteristicResults;
+ (id /* block */)transformationSetBlock;

- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (id)initWithServiceGridItemManager:(id)a0;
- (void)_addCharacteristicEventsForAlarmItem:(id)a0;
- (void)_addCharacteristicEventsForOtherDeviceItem:(id)a0;
- (BOOL)canSelectItem:(id)a0 indexPath:(id)a1;
- (void)didChangeSelection;
- (id)initWithFlow:(id)a0 stepIdentifier:(id)a1;
- (id)initWithTriggerBuilder:(id)a0 eventBuilderItem:(id)a1 source:(unsigned long long)a2;
- (void)itemManagerDidUpdate:(id)a0;
- (id)layoutOptionsForSection:(long long)a0;
- (BOOL)serviceGridItemManager:(id)a0 shouldHideItem:(id)a1;

@end
