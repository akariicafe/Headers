@class NSError, NSString, NSArray, UITraitCollection, UIImage, WFAction, NSAttributedString, WFModuleAppearance, NSDictionary, CKComponentScopeHandle, _scopeHandle;
@protocol WFVariableProvider, WFModuleDelegate, WFVariableUIDelegate, WFModuleParameterStateWriter;

@interface WFModuleModel : NSObject <WFModuleParameterStateWriter>

@property (readonly, nonatomic) NSArray *workflowTypes;
@property (readonly, weak, nonatomic) WFAction *action;
@property (readonly, weak, nonatomic) id<WFModuleDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIImage *keyImage;
@property (readonly, copy, nonatomic) NSString *localizedParameterSummaryFormatString;
@property (readonly, copy, nonatomic) NSAttributedString *localizedFooter;
@property (readonly, nonatomic) BOOL isMissing;
@property (readonly, nonatomic) BOOL isDiscontinued;
@property (readonly, nonatomic) WFModuleAppearance *appearance;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) BOOL isDraggingIntoWorkflow;
@property (readonly, nonatomic) unsigned long long headerTextStyle;
@property (readonly, nonatomic) BOOL isDimmed;
@property (readonly, nonatomic) BOOL showSettings;
@property (readonly, nonatomic) unsigned long long indentationLevel;
@property (readonly, nonatomic) NSError *resourceError;
@property (readonly, nonatomic) NSArray *allParameters;
@property (readonly, nonatomic) NSArray *parametersInListing;
@property (readonly, nonatomic) NSDictionary *parameterStates;
@property (readonly, nonatomic) unsigned long long parameterCollapsingBehavior;
@property (readonly, nonatomic) Class customConfigurationClass;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL isRemovable;
@property (readonly, nonatomic) BOOL isWorkflowRunning;
@property (readonly, nonatomic) unsigned long long runningActionIndex;
@property (readonly, nonatomic) BOOL isSelectingParameter;
@property (readonly, nonatomic) struct CKTypedComponentAction<WFAction *, WFParameter *> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } parameterSelectionAction;
@property (readonly, nonatomic) NSArray *parametersExcludedFromSelection;
@property (readonly, weak, nonatomic) id<WFModuleParameterStateWriter> parameterStateWriter;
@property (readonly, weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;

+ (id)modelForEditingAction:(id)a0 withWorkflowTypes:(id)a1 draggingIntoWorkflow:(BOOL)a2 traitCollection:(id)a3 customConfigurationClass:(Class)a4 variableUIDelegate:(id)a5 delegate:(id)a6;
+ (id)modelForSelectingParameterOfAction:(id)a0 excludingParameters:(id)a1 selectionAction:(struct CKTypedComponentAction<WFAction *, WFParameter *> { unsigned long long x0; id x1; id x2; SEL x3; })a2 traitCollection:(id)a3 delegate:(id)a4;
+ (id)modelForViewingAction:(id)a0 whileWorkflowRunning:(BOOL)a1 withWorkflowTypes:(id)a2 appearance:(id)a3 traitCollection:(id)a4 dimmed:(BOOL)a5 customConfigurationClass:(Class)a6 delegate:(id)a7;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)updatedModel;
- (BOOL)setState:(id)a0 ofParameter:(id)a1;
- (id)initWithAction:(id)a0 workflowTypes:(id)a1 editable:(BOOL)a2 workflowRunning:(BOOL)a3 appearance:(id)a4 traitCollection:(id)a5 dimmed:(BOOL)a6 draggingIntoWorkflow:(BOOL)a7 customConfigurationClass:(Class)a8 variableUIDelegate:(id)a9 delegate:(id)a10 parameterSelectionAction:(struct CKTypedComponentAction<WFAction *, WFParameter *> { unsigned long long x0; id x1; id x2; SEL x3; })a11 parameterSelectionExclusions:(id)a12;

@end
