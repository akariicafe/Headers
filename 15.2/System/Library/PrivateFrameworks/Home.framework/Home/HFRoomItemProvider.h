@class HMHome, NSMutableSet;

@interface HFRoomItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *roomItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;

@end
