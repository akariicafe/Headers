@class HMHome, NSMutableSet;
@protocol HFMediaProfileContainer;

@interface HUPrimaryUserItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *userItems;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithHome:(id)a0 mediaProfileContainer:(id)a1;

@end
