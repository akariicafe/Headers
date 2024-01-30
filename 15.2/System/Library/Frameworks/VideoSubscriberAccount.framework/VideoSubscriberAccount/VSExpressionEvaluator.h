@class NSArray, NSExpression, NSDictionary, NSString;

@interface VSExpressionEvaluator : NSObject <VSObservanceDelegate>

@property (retain, nonatomic) id value;
@property (nonatomic, getter=isMonitoringForChanges) BOOL monitoringForChanges;
@property (copy, nonatomic) NSArray *observers;
@property (nonatomic) BOOL hasDeterminedValue;
@property (copy, nonatomic) NSExpression *expression;
@property (nonatomic) id object;
@property (copy, nonatomic) NSDictionary *substitutionVariables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfValue;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeChange:(id)a0 forObservance:(id)a1;
- (void)_stopMonitoringForChanges;
- (id)_observersForExpression:(id)a0;
- (id)_observersForPredicate:(id)a0;
- (void)_updateComputedResult:(id)a0;
- (void)_startMonitoringForChanges;
- (void)_updateComputedResultIfNeeded;

@end
