@interface WorkflowEditor.WorkflowEditorOptions : NSObject <WFActionDrawerDelegate> {
    void /* unknown type, empty encoding */ _canShowEmptyState;
    void /* unknown type, empty encoding */ _canShowInputAction;
    void /* unknown type, empty encoding */ _isExplicitlyReadOnly;
    void /* unknown type, empty encoding */ _home;
    void /* unknown type, empty encoding */ _scrollingBehavior;
    void /* unknown type, empty encoding */ _auxiliaryBarVisibility;
    void /* unknown type, empty encoding */ editorDelegate;
    void /* unknown type, empty encoding */ auxiliaryViewPresenter;
    void /* unknown type, empty encoding */ coordinateSpaceDelegate;
    void /* unknown type, empty encoding */ _variableEditingState;
    void /* unknown type, empty encoding */ _variablePickingState;
    void /* unknown type, empty encoding */ _parameterEditingHint;
    void /* unknown type, empty encoding */ _parameterSelectionState;
    void /* unknown type, empty encoding */ _previewingContentCollection;
    void /* unknown type, empty encoding */ _actionError;
    void /* unknown type, empty encoding */ _isEditingVariable;
    void /* unknown type, empty encoding */ canvasWidth;
    void /* unknown type, empty encoding */ onScrollToAction;
    void /* unknown type, empty encoding */ pendingScrollParameters;
    void /* unknown type, empty encoding */ onActionParameterStateChange;
    void /* unknown type, empty encoding */ onSavePendingChanges;
}

- (double)actionCanvasWidth;
- (void)appendAction:(id)a0;
- (void)presentDrawerViewController:(id)a0 inPopover:(BOOL)a1 withSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)init;
- (void).cxx_destruct;

@end
