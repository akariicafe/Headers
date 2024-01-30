@class HMHome, NSMutableSet, NSString;

@interface HUCCFavoriteActionSetItemProvider : HFItemProvider <HUCCFavoriteItemProvider>

@property (retain, nonatomic) NSMutableSet *actionSetItems;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) unsigned long long actionSetItemStyle;
@property (nonatomic) unsigned long long maximumNumberOfItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)items;
- (id)invalidationReasons;
- (id)initWithHome:(id)a0 actionSetItemStyle:(unsigned long long)a1;
- (id)reloadItems;

@end
