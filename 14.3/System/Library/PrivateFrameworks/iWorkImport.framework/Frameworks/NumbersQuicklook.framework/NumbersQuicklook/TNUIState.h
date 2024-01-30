@class NSArray, NSMutableDictionary, TSDFreehandDrawingToolkitUIState, TSKSelectionPath, NSString;
@protocol TNUIStateDelegate;

@interface TNUIState : NSObject <NSCopying, TSAUIState>

@property (readonly, nonatomic) NSMutableDictionary *chartUIState;
@property (readonly, nonatomic) NSMutableDictionary *sheetUIStates;
@property (readonly, nonatomic) NSMutableDictionary *editModeSheetUIStates;
@property (nonatomic, getter=inspectorPaneIsVisible) BOOL inspectorPaneIsVisible;
@property (nonatomic, getter=inspectorPaneIsAutoHidden) BOOL inspectorPaneIsAutoHidden;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } scrollPosition;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } previousScrollPosition;
@property (readonly, nonatomic) BOOL hasVisibleRect;
@property (readonly, nonatomic) BOOL hasPreviousVisibleRect;
@property (readonly, nonatomic) float viewScale;
@property (readonly, nonatomic) float previousViewScale;
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

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct UIStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x7; struct RepeatedPtrField<TSCH::ChartUIState> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct RepeatedPtrField<TN::UUIDSheetUIStateDictionaryArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct SelectionArchive *x10; struct ChartSelectionArchive *x11; struct Reference *x12; struct Point *x13; struct Size *x14; struct Size *x15; struct SelectionPathArchive *x16; struct Reference *x17; struct Reference *x18; unsigned int x19; unsigned int x20; int x21; int x22; unsigned int x23; unsigned int x24; int x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; } *)a0 unarchiver:(id)a1;
- (id)archivedUIStateInContext:(id)a0;
- (id)UIStateForChart:(id)a0;
- (void)setUIState:(id)a0 forChart:(id)a1;
- (void)resetForInitialViewing;
- (void)saveToArchive:(struct UIStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x7; struct RepeatedPtrField<TSCH::ChartUIState> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct RepeatedPtrField<TN::UUIDSheetUIStateDictionaryArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct SelectionArchive *x10; struct ChartSelectionArchive *x11; struct Reference *x12; struct Point *x13; struct Size *x14; struct Size *x15; struct SelectionPathArchive *x16; struct Reference *x17; struct Reference *x18; unsigned int x19; unsigned int x20; int x21; int x22; unsigned int x23; unsigned int x24; int x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; } *)a0 archiver:(id)a1 context:(id)a2;
- (void)clearVisibleRect;
- (void)clearPreviousVisibleRect;
- (id)p_uiStateForActiveSheet;
- (id)uiStateForSheet:(id)a0;
- (float)p_calculateViewScaleForVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSheet:(id)a1;
- (float)p_defaultViewScale;
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
- (void)fixupSelectionPathsForRestorationForcingUnpagination:(BOOL)a0;

@end
