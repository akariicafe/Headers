@class NSArray, NSMutableDictionary, NSMutableSet, HFPredictionsManager, HMHome;

@interface HFPredictionsItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *allItems;
@property (retain, nonatomic) NSArray *predictions;
@property (retain, nonatomic) NSMutableDictionary *objectPriorities;
@property (retain, nonatomic) HFPredictionsManager *predictionsManager;
@property (nonatomic) unsigned long long itemLimit;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithHome:(id)a0 predictionsManager:(id)a1 itemLimit:(unsigned long long)a2;
- (id)_loadHomeKitObjectsWithPredictions:(id)a0;
- (id)itemPriority:(id)a0;

@end
