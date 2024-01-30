@class NSSet, HUCharacteristicEventOptionProvider, HFItem;
@protocol HFServiceLikeItem;

@interface HUServiceDetailsProgrammableSwitchItemModule : HUServiceDetailsItemModule

@property (copy, nonatomic) NSSet *itemProviders;
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *sourceItem;
@property (readonly, nonatomic) HUCharacteristicEventOptionProvider *programmableSwitchOptionsProvider;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;

@end
