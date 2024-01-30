@class HMHome, WFWorkflow, WFAction;

@interface WFEditorHostingViewController : UIViewController <WorkflowEditor.WorkflowEditorViewDelegate, WFWorkflowEditingDelegate> {
    void /* unknown type, empty encoding */ workflow;
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ editorOptions;
    void /* unknown type, empty encoding */ actionList;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ runner;
    void /* unknown type, empty encoding */ coordinateSpaceName;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ auxiliaryViewPresenter;
@property (nonatomic, retain) void /* unknown type, empty encoding */ actionSuggester;
@property (nonatomic, readonly) BOOL isRunning;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL canShowEmptyState;
@property (nonatomic) BOOL canShowInputAction;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, readonly) BOOL isHomeWorkflow;
@property (nonatomic, readonly) double actionCanvasWidth;

- (void)reportSuggestionSessionEnded;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (id)initWithWorkflow:(id)a0;
- (void)workflow:(id)a0 insertActions:(id)a1 atIndexes:(id)a2;
- (void)workflow:(id)a0 moveActionsAtIndexes:(id)a1 toIndexes:(id)a2;
- (void)workflow:(WFWorkflow *)a0 removeAction:(WFAction *)a1 completionHandler:(void (^)(BOOL))a2;
- (void)performScrollingTest:(id)a0;
- (void)runWithSource:(id)a0;
- (void)scrollToAction:(id)a0;
- (void)startPickingParametersForImportQuestionsWithExcluding:(id)a0 onSelect:(id /* block */)a1;
- (void)appendAction:(id)a0 selectionAware:(BOOL)a1;
- (void)insertAction:(id)a0 at:(long long)a1;
- (void)insertActions:(id)a0 at:(long long)a1;
- (void)moveActionsFrom:(id)a0 to:(id)a1;
- (void)removeActions:(id)a0 mode:(long long)a1;
- (void)showActionError:(id)a0 for:(id)a1;
- (void)stopPickingVariables;

@end
