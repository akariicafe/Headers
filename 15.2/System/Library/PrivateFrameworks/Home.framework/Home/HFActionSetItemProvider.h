@class HMRoom, HFItem, NSMutableSet, HMHome;
@protocol HFServiceLikeItem, HFCharacteristicValueSource;

@interface HFActionSetItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *actionSetItems;
@property (retain, nonatomic) id<HFCharacteristicValueSource> overrideValueSource;
@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HMRoom *room;
@property (nonatomic) BOOL onlyShowsFavorites;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) unsigned long long actionSetItemStyle;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithHome:(id)a0 actionSetItemStyle:(unsigned long long)a1;
- (id /* block */)_roomFilter;
- (id /* block */)_favoriteFilter;

@end
