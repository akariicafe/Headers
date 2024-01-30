@class NSString, NSMutableArray;
@protocol SXBlueprintAnalyzer, SXComponentInsertionConditionEngine, SXUnitConverterFactory, SXComponentInserterManager;

@interface SXComponentInsertionManager : NSObject <SXComponentInsertionManager>

@property (readonly, nonatomic) id<SXComponentInserterManager> inserterManager;
@property (readonly, nonatomic) id<SXComponentInsertionConditionEngine> conditionEngine;
@property (readonly, nonatomic) id<SXBlueprintAnalyzer> blueprintAnalyzer;
@property (readonly, nonatomic) id<SXUnitConverterFactory> unitConverterFactory;
@property (readonly, nonatomic) NSMutableArray *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithComponentInserterManager:(id)a0 conditionEngine:(id)a1 blueprintAnalyzer:(id)a2 unitConverterFactory:(id)a3;
- (id)insertComponentsForBlueprint:(id)a0 DOMObjectProvider:(id)a1;
- (id)insertForMarker:(id)a0 inserter:(id)a1 DOMObjectProvider:(id)a2 layoutProvider:(id)a3;
- (void)updateDOM:(id)a0 layoutBlueprint:(id)a1 insert:(id)a2 marker:(id)a3;

@end
