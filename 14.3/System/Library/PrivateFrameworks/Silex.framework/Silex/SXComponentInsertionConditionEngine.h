@class NSString, NSMutableSet;

@interface SXComponentInsertionConditionEngine : NSObject <SXComponentInsertionConditionEngine>

@property (readonly, nonatomic) NSMutableSet *conditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addCondition:(id)a0;
- (BOOL)validateMarker:(id)a0 componentTraits:(unsigned long long)a1 layoutProvider:(id)a2;
- (void)prepareWithComponents:(id)a0 layoutProvider:(id)a1;
- (void)insertedComponent:(id)a0 approximateLocation:(struct CGPoint { double x0; double x1; })a1;

@end
