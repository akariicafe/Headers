@class NSString, NSMutableDictionary;
@protocol FCDerivedPersonalizationData;

@interface FCReadonlyPersonalizationAggregateStore : NSObject <FCReadonlyPersonalizationAggregateStore>

@property (retain, nonatomic) id<FCDerivedPersonalizationData> derivedPersonalizationData;
@property (retain, nonatomic) NSMutableDictionary *overrideAggregatesByFeatureKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aggregatesForFeatures:(id)a0;
- (id)baselineAggregateWithConfigurableValues:(id)a0;
- (void)updateFeatures:(id)a0 withAction:(unsigned long long)a1 displayRank:(long long)a2 groupRank:(long long)a3 individually:(BOOL)a4 configurableValues:(id)a5;
- (void)modifyLocalAggregatesForFeatureKeys:(id)a0 withAction:(unsigned long long)a1 actionCount:(unsigned long long)a2 defaultClicks:(double)a3 defaultImpressions:(double)a4 impressionBias:(double)a5 configurableValues:(id)a6;
- (void)processTodayPersonalizationUpdates:(id)a0 withConfigurableValues:(id)a1;
- (id)initWithDerivedPersonalizationData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
