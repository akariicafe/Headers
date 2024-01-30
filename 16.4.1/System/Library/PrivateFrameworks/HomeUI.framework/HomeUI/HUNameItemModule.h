@class HFItemBuilder, HFItem, NSSet, HFTransformItem, HFStaticItemProvider;
@protocol HFNamingComponentCreating;

@interface HUNameItemModule : HFItemModule

@property (retain, nonatomic) HFItem<HFNamingComponentCreating> *sourceItem;
@property (retain, nonatomic) HFItemBuilder *sourceItemBuilder;
@property (retain, nonatomic) HFTransformItem *nameAndIconItem;
@property (retain, nonatomic) NSSet *items;
@property (retain, nonatomic) HFStaticItemProvider *itemProvider;

- (id)init;
- (void).cxx_destruct;
- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 sourceServiceLikeItem:(id)a1 itemBuilder:(id)a2;

@end
