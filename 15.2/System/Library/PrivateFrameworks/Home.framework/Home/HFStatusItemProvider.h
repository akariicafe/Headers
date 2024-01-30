@class HMHome, HMRoom;

@interface HFStatusItemProvider : HFStaticItemProvider

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMRoom *room;

+ (id)_statusItemClasses;
+ (BOOL)hasStatusItemForServiceType:(id)a0;
+ (id)sortOrderForStatusItemCategory:(unsigned long long)a0;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0 room:(id)a1;
- (id)_createStatusItemsForHome:(id)a0 room:(id)a1;
- (id)_buildStatusItemWithClass:(Class)a0 home:(id)a1 room:(id)a2;
- (void)_buildStatusItemsForGroupedStatusItem:(id)a0;

@end
