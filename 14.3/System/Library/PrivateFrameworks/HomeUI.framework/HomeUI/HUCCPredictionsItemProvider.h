@class NSArray, NSMutableDictionary, NSMutableSet, HUCCPredictionManager, HMHome;

@interface HUCCPredictionsItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *allItems;
@property (retain, nonatomic) NSArray *predictions;
@property (retain, nonatomic) NSMutableDictionary *objectPriorities;
@property (retain, nonatomic) HUCCPredictionManager *predictionManager;
@property (nonatomic) unsigned long long itemLimit;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;
- (id)initWithHome:(id)a0 predictionManager:(id)a1 itemLimit:(unsigned long long)a2;
- (id)_loadHomeKitObjectsWithPredictions:(id)a0;
- (id)itemPriority:(id)a0;

@end
