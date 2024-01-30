@class NSSet, HFItem;
@protocol HFCharacteristicValueSource, NSCopying;

@interface HFControlPanelItemProvider : HFItemProvider

@property (copy, nonatomic) NSSet *controlPanelItems;
@property (readonly, copy, nonatomic) HFItem<NSCopying> *item;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (copy, nonatomic) id /* block */ filter;

+ (BOOL)prefersNonBlockingReloads;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id /* block */)controlPanelItemComparator;
- (id)initWithItem:(id)a0 valueSource:(id)a1;
- (id)invalidationReasons;

@end
