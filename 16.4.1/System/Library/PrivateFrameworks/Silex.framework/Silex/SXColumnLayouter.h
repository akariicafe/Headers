@class NSString, NSMutableDictionary, SXLayouterFactory;
@protocol SXLayouterDelegate, SXLayoutContextFactory, SXUnitConverterFactory;

@interface SXColumnLayouter : NSObject <SXLayouter>

@property (readonly, nonatomic) SXLayouterFactory *layouterFactory;
@property (readonly, nonatomic) NSMutableDictionary *intersectionCache;
@property (readonly, nonatomic) id<SXLayoutContextFactory> layoutContextFactory;
@property (readonly, nonatomic) id<SXUnitConverterFactory> unitConverterFactory;
@property (weak, nonatomic) id<SXLayouterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })calculatePositionForComponentNode:(id)a0 columnLayout:(id)a1 layoutBlueprint:(id)a2;
- (void)analyzeSnapLinesForLayoutBlueprint:(id)a0;
- (BOOL)anchorPossibleForComponentWithBlueprint:(id)a0 anchoredToComponentWithBlueprint:(id)a1 layoutBlueprint:(id)a2 columnStack:(id)a3;
- (struct CGSize { double x0; double x1; })calculateSizeForComponentNode:(id)a0 columnLayout:(id)a1 layoutBlueprint:(id)a2 dependencyResolver:(id)a3;
- (id)columnStackForLayoutBlueprint:(id)a0 columnLayout:(id)a1;
- (BOOL)componentBlueprint:(id)a0 shouldIntersectWithComponentBlueprint:(id)a1;
- (void)createDependenciesForLayoutBlueprint:(id)a0 columnStack:(id)a1 inDependencyResolver:(id)a2;
- (double)factorForLayoutAttribute:(int)a0;
- (id)findComponentStackBeforeComponent:(id)a0 inColumnStack:(id)a1;
- (id)initWithLayouterFactory:(id)a0 layoutContextFactory:(id)a1 unitConverterFactory:(id)a2;
- (BOOL)intersectionPossibleForComponentWithBlueprint:(id)a0 anchoredToComponentWithBlueprint:(id)a1 layoutBlueprint:(id)a2 columnStack:(id)a3;
- (int)layoutAttributeForAnchor:(long long)a0;
- (void)layoutBlueprint:(id)a0 columnLayout:(id)a1 description:(id)a2 shouldContinue:(BOOL *)a3;
- (id)sortComponentDependencies:(id)a0 forBlueprint:(id)a1;
- (BOOL)stack:(id)a0 stackComponents:(id)a1 containsComponentIncludingAnchoredComponents:(id)a2 forSourceComponent:(id)a3;

@end
