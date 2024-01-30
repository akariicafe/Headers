@class HMHome, HFRoomBuilderItem, HFItemBuilder;
@protocol HFServiceLikeBuilder;

@interface HFSelectedRoomItemProvider : HFItemProvider

@property (retain, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder;
@property (retain, nonatomic) HFRoomBuilderItem *roomBuilderItem;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithHome:(id)a0 serviceLikeBuilder:(id)a1;

@end
