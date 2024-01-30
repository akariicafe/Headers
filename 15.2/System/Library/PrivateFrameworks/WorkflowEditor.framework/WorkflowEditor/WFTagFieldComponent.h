@class NSString, NSArray, NSSet;
@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;

@interface WFTagFieldComponent : CKStatefulViewComponent

@property (readonly, nonatomic) struct WFTagFieldAttributes { BOOL editable; BOOL allowsTextEntry; NSString *placeholder; long long keyboardType; long long textAlignment; long long autocorrectionType; long long autocapitalizationType; NSString *tags; NSString *fieldTitle; NSArray *suggestedTags; id<WFVariableProvider> variableProvider; id<WFVariableUIDelegate> variableUIDelegate; NSSet *allowedVariableTypes; BOOL variablesDisabled; } attributes;
@property (readonly, nonatomic) id /* block */ updateBlock;
@property (readonly, nonatomic) id /* block */ variableBlock;
@property (readonly, weak, nonatomic) id<WFComponentNavigationContext> navigationContext;

+ (id)newWithAttributes:(const struct WFTagFieldAttributes { BOOL x0; BOOL x1; id x2; long long x3; long long x4; long long x5; long long x6; id x7; id x8; id x9; id x10; id x11; id x12; BOOL x13; } *)a0 updateBlock:(id /* block */)a1 variableBlock:(id /* block */)a2 navigationContext:(id)a3 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a4;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
