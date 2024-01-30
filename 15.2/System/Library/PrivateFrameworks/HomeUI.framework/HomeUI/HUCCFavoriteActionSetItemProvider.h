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

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithHome:(id)a0 actionSetItemStyle:(unsigned long long)a1;

@end
