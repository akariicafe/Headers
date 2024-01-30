@class NSMutableSet, NSMutableDictionary;

@interface SXConditionalObjectAnalysis : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_conditionsToComponentsMap;
    NSMutableDictionary *_componentsToConditionsMap;
    NSMutableDictionary *_conditionsToComponentStylesMap;
    NSMutableDictionary *_componentStylesToConditionsMap;
    NSMutableDictionary *_conditionsToComponentLayoutsMap;
    NSMutableDictionary *_componentLayoutsToConditionsMap;
    NSMutableDictionary *_conditionsToComponentTextStylesMap;
    NSMutableDictionary *_componentTextStylesToConditionsMap;
    NSMutableDictionary *_conditionsToTextStylesMap;
    NSMutableDictionary *_textStylesToConditionsMap;
}

@property (readonly, copy, nonatomic) NSMutableSet *documentStyleConditionTypes;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)populateWithSource:(id)a0;
- (id)componentsUsingConditionTypes:(id)a0;
- (id)objectsForKeys:(id)a0 map:(id)a1;
- (id)conditionTypesUsedByComponents:(id)a0;
- (id)componentStylesUsingConditionTypes:(id)a0;
- (id)conditionTypesUsedByComponentStyles:(id)a0;
- (id)componentTextStylesUsingConditionTypes:(id)a0;
- (id)conditionTypesUsedByComponentTextStyles:(id)a0;
- (id)textStylesUsingConditionTypes:(id)a0;
- (id)conditionTypesUsedByTextStyles:(id)a0;
- (id)componentLayoutsUsingConditionTypes:(id)a0;
- (id)conditionTypesUsedByComponentLayouts:(id)a0;
- (id)objectsForKey:(id)a0 map:(id)a1;
- (id)componentsUsingConditionType:(id)a0;
- (id)conditionTypesUsedByComponent:(id)a0;
- (id)componentStylesUsingConditionType:(id)a0;
- (id)conditionTypesUsedByComponentStyle:(id)a0;
- (id)componentTextStylesUsingConditionType:(id)a0;
- (id)conditionTypesUsedByComponentTextStyle:(id)a0;
- (id)textStylesUsingConditionType:(id)a0;
- (id)conditionTypesUsedByTextStyle:(id)a0;
- (id)componentLayoutsUsingConditionType:(id)a0;
- (id)conditionTypesUsedByComponentLayout:(id)a0;

@end
