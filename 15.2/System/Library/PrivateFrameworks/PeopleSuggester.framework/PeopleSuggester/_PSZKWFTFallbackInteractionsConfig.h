@class NSArray;

@interface _PSZKWFTFallbackInteractionsConfig : NSObject

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) long long defaultConfidenceCategory;
@property (readonly, copy, nonatomic) NSArray *mechanisms;
@property (readonly, copy, nonatomic) NSArray *interactionCountMaxDepths;
@property (readonly, copy, nonatomic) NSArray *interactionHistoryRelativeStartDates;
@property (readonly, copy, nonatomic) NSArray *bundleIds;
@property (readonly, nonatomic) long long modelType;
@property (readonly, nonatomic) unsigned long long maxSuggestions;
@property (readonly, nonatomic) unsigned long long clusterPruneThreshold;

- (id)initWithIsEnabled:(BOOL)a0 defaultConfidenceCategory:(long long)a1 modelType:(long long)a2;
- (void).cxx_destruct;
- (id)initWithIsEnabled:(BOOL)a0 defaultConfidenceCategory:(long long)a1 mechanisms:(id)a2 interactionCountMaxDepths:(id)a3 interactionHistoryRelativeStartDates:(id)a4 bundleIds:(id)a5 modelType:(long long)a6 clusterPruneThreshold:(unsigned long long)a7 maxSuggestions:(unsigned long long)a8;

@end
