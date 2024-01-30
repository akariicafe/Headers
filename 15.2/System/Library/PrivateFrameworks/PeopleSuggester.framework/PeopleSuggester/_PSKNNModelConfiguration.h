@class NSArray, NSString;

@interface _PSKNNModelConfiguration : NSObject

@property (retain, nonatomic) NSArray *interactionCountMaxDepths;
@property (retain, nonatomic) NSArray *interactionMechanisms;
@property (retain, nonatomic) NSArray *interactionHistoryRelativeStartDates;
@property (retain, nonatomic) NSArray *bundleIds;
@property (nonatomic) long long modelType;
@property (retain, nonatomic) NSString *modelName;
@property (readonly, nonatomic) unsigned long long clusterPruneThreshold;
@property (copy, nonatomic) id /* block */ shouldExcludeInteractionBlock;

- (id)initWithInteractionMechanisms:(id)a0 interactionCountMaxDepths:(id)a1 interactionHistoryRelativeStartDates:(id)a2 bundleIds:(id)a3 modelType:(long long)a4 clusterPruneThreshold:(unsigned long long)a5 modelName:(id)a6 shouldExcludeInteractionBlock:(id /* block */)a7;
- (void).cxx_destruct;
- (id)initWithInteractionMechanisms:(id)a0 interactionCountMaxDepths:(id)a1 interactionHistoryRelativeStartDates:(id)a2 bundleIds:(id)a3 modelType:(long long)a4 clusterPruneThreshold:(unsigned long long)a5 modelName:(id)a6;

@end
