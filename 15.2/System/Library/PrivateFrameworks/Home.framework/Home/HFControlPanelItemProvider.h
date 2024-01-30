@class NSSet, HFItem;
@protocol HFCharacteristicValueSource, NSCopying;

@interface HFControlPanelItemProvider : HFItemProvider

@property (copy, nonatomic) NSSet *controlPanelItems;
@property (readonly, copy, nonatomic) HFItem<NSCopying> *item;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (copy, nonatomic) id /* block */ filter;

+ (BOOL)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithItem:(id)a0 valueSource:(id)a1;
- (id /* block */)controlPanelItemComparator;

@end
