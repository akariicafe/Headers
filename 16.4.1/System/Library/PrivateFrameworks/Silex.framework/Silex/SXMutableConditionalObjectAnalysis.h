@class NSMutableSet;

@interface SXMutableConditionalObjectAnalysis : SXConditionalObjectAnalysis

@property (copy, nonatomic) NSMutableSet *documentStyleConditionTypes;

- (void)addComponentIdentifier:(id)a0 conditionTypes:(id)a1;
- (void)addComponentLayoutIdentifier:(id)a0 conditionTypes:(id)a1;
- (void)addComponentStyleIdentifier:(id)a0 conditionTypes:(id)a1;
- (void)addComponentTextStyleIdentifier:(id)a0 conditionTypes:(id)a1;
- (void)addObject:(id)a0 keys:(id)a1 map:(id)a2;
- (void)addObjects:(id)a0 key:(id)a1 map:(id)a2;
- (void)addTextStyleIdentifier:(id)a0 conditionTypes:(id)a1;
- (void)removeComponentIdentifier:(id)a0 conditionTypes:(id)a1;
- (void)removeComponentLayoutIdentifier:(id)a0 conditionTypes:(id)a1;
- (void)removeComponentStyleIdentifier:(id)a0 conditionTypes:(id)a1;
- (void)removeComponentTextStyleIdentifier:(id)a0 conditionTypes:(id)a1;
- (void)removeObject:(id)a0 keys:(id)a1 map:(id)a2;
- (void)removeObjects:(id)a0 key:(id)a1 map:(id)a2;
- (void)removeTextStyleIdentifier:(id)a0 conditionTypes:(id)a1;

@end
