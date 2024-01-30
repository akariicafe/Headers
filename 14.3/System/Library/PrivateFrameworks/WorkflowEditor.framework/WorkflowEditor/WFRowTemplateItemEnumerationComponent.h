@class NSArray, NSDictionary, NSString, NSSet, WFVariable, NSObject;
@protocol WFVariableProvider, WFComponentNavigationContext, WFVariableUIDelegate, NSCopying;

@interface WFRowTemplateItemEnumerationComponent : CKCompositeComponent {
    id /* block */ _updateBlock;
    NSArray *_possibleValues;
    NSObject<NSCopying> *_selectedValue;
    WFVariable *_variable;
    NSDictionary *_labelMapping;
    NSString *_prompt;
    NSSet *_allowedVariableTypes;
    BOOL _variablesDisabled;
    id<WFVariableProvider> _variableProvider;
    id<WFVariableUIDelegate> _variableUIDelegate;
    id<WFComponentNavigationContext> _navigationContext;
}

+ (id)newWithPossibleValues:(id)a0 labels:(id)a1 selectedValue:(id)a2 prompt:(id)a3 identifier:(id)a4 updateBlock:(id /* block */)a5 options:(struct WFRowTemplateItemEnumerationComponentOptions { BOOL x0; BOOL x1; id x2; id x3; id x4; BOOL x5; })a6 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a7 variableProvider:(id)a8 variableUIDelegate:(id)a9 navigationContext:(id)a10;

- (void).cxx_destruct;
- (void)buttonTapped:(id)a0;

@end
