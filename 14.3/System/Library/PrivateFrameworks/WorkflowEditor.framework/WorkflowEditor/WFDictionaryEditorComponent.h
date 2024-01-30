@class NSArray, NSString, NSSet;
@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;

@interface WFDictionaryEditorComponent : CKStatefulViewComponent

@property (readonly, nonatomic) NSArray *keyValuePairs;
@property (readonly, weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (readonly, weak, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (readonly, copy, nonatomic) NSString *localizedNewItemTypeName;
@property (readonly, copy, nonatomic) NSSet *allowedValueTypes;
@property (readonly, copy, nonatomic) NSSet *allowedVariableTypes;
@property (readonly, nonatomic) BOOL variablesDisabled;
@property (readonly, nonatomic) BOOL editable;
@property (readonly, nonatomic) id /* block */ updateBlock;
@property (readonly, nonatomic) double additionalBottomMargin;

+ (id)newWithKeyValuePairs:(id)a0 variableProvider:(id)a1 variableUIDelegate:(id)a2 navigationContext:(id)a3 localizedNewItemTypeName:(id)a4 variablesDisabled:(BOOL)a5 allowedValueTypes:(id)a6 allowedVariableTypes:(id)a7 editable:(BOOL)a8 updateBlock:(id /* block */)a9 additionalBottomMargin:(double)a10 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a11;

- (void).cxx_destruct;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
