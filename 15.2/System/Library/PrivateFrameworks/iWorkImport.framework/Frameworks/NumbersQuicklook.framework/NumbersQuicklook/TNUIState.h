@class NSArray, NSMutableDictionary, TSDFreehandDrawingToolkitUIState, TSKSelectionPath, NSString;
@protocol TNUIStateDelegate;

@interface TNUIState : NSObject <NSCopying, TSAUIState>

@property (readonly, nonatomic) NSMutableDictionary *chartUIState;
@property (readonly, nonatomic) NSMutableDictionary *sheetUIStates;
@property (readonly, nonatomic) NSMutableDictionary *editModeSheetUIStates;
@property (nonatomic, getter=inspectorPaneIsVisible) BOOL inspectorPaneIsVisible;
@property (nonatomic, getter=inspectorPaneIsAutoHidden) BOOL inspectorPaneIsAutoHidden;
@property (readonly, nonatomic) BOOL isInPaginatedMode;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } scrollPosition;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } previousScrollPosition;
@property (readonly, nonatomic) BOOL hasVisibleRect;
@property (readonly, nonatomic) BOOL hasPreviousVisibleRect;
@property (readonly, nonatomic) float viewScale;
@property (readonly, nonatomic) float previousViewScale;
@property (readonly, nonatomic) float defaultViewScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } previousVisibleRect;
@property (weak, nonatomic) id<TNUIStateDelegate> delegate;
@property (nonatomic) long long documentMode;
@property (nonatomic) long long inspectorPaneHiddenState;
@property (nonatomic) int inspectorPaneViewMode;
@property (copy, nonatomic) NSArray *selectedQuickCalcFunctions;
@property (nonatomic) BOOL removedAllQuickCalcFunctions;
@property (nonatomic) BOOL showsComments;
@property (nonatomic) BOOL showsRulers;
@property (retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } desktopWindowFrame;
@property (nonatomic) struct CGSize { double width; double height; } desktopScreenSize;
@property (nonatomic) BOOL showCanvasGuides;
@property (nonatomic) BOOL editingDisabled;
@property (copy, nonatomic) TSKSelectionPath *selectionPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)maximumViewScale;
+ (double)minimumViewScale;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)archivedUIStateInContext:(id)a0;
- (id)UIStateForChart:(id)a0;
- (void)setUIState:(id)a0 forChart:(id)a1;
- (void)resetForInitialViewing;
- (void)saveToArchive:(void *)a0 archiver:(id)a1 context:(id)a2;
- (void)clearVisibleRect;
- (void)clearPreviousVisibleRect;
- (id)p_uiStateForActiveSheet;
- (id)uiStateForSheet:(id)a0;
- (float)p_calculateViewScaleForVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSheet:(id)a1;
- (void)setPreviousVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSheet:(id)a1;
- (float)viewScaleForSheet:(id)a0;
- (void)removeUIStateForSheet:(id)a0;
- (id)uiStateForSheet:(id)a0 createIfNeeded:(BOOL)a1;
- (void)p_enterPaginatedMode;
- (void)p_exitPaginatedMode;
- (id)p_fixedUpSelectionPathForRestoration:(id)a0 forcingUnpagination:(BOOL)a1;
- (void)enumerateSheetUIStatesWithBlock:(id /* block */)a0;
- (void)setUIState:(id)a0 forSheet:(id)a1;
- (void)removeAllUIStatesForSheet:(id)a0;
- (id)_sheetUIStateForPrintingSheet:(id)a0;
- (void)fixupSelectionPathsForRestorationForcingUnpagination:(BOOL)a0;

@end
