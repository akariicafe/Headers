@class NSSet;

@interface HFStaticItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *staticItems;
@property (nonatomic) BOOL hasProvidedItems;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)initWithHome:(id)a0 items:(id)a1;

@end
