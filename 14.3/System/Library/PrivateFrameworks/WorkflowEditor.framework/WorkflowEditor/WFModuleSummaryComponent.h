@class NSString, NSSet, NSDictionary, WFModuleAppearance, WFAction;
@protocol WFVariableProvider, WFComponentNavigationContext, WFVariableUIDelegate, WFModuleParameterStateWriter;

@interface WFModuleSummaryComponent : CKStatefulViewComponent

@property (readonly, copy, nonatomic) NSString *summaryFormatString;
@property (readonly, copy, nonatomic) NSSet *parameters;
@property (readonly, copy, nonatomic) NSSet *editableParameters;
@property (readonly, copy, nonatomic) NSDictionary *parameterStates;
@property (readonly, copy, nonatomic) NSDictionary *stagedParameterStates;
@property (readonly, nonatomic) BOOL processing;
@property (readonly, nonatomic) WFModuleAppearance *appearance;
@property (readonly, weak, nonatomic) id<WFModuleParameterStateWriter> stateWriter;
@property (readonly, weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (readonly, weak, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (readonly, nonatomic) NSString *firstResponderParameterKey;
@property (readonly, nonatomic) double horizontalPadding;
@property (readonly, nonatomic) long long textAlignment;
@property (readonly, nonatomic) BOOL extendSlotBackgroundOffEdges;
@property (readonly, weak, nonatomic) WFAction *actionForRunningMonitoring;
@property (readonly, nonatomic) BOOL preparingToRun;

+ (id)newWithSummaryFormatString:(id)a0 parameters:(id)a1 editableParameters:(id)a2 parameterStates:(id)a3 processing:(BOOL)a4 appearance:(id)a5 stateWriter:(id)a6 variableProvider:(id)a7 variableUIDelegate:(id)a8 navigationContext:(id)a9 firstResponderParameterKey:(id)a10 horizontalPadding:(double)a11 textAlignment:(long long)a12 extendSlotBackgroundOffEdges:(BOOL)a13 actionForRunningMonitoring:(id)a14 preparingToRun:(BOOL)a15;

- (void).cxx_destruct;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reflowWithStagedParameterStates:(id)a0;

@end
