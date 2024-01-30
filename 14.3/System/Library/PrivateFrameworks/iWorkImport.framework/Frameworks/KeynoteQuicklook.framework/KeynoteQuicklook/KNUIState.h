@class NSString, NSArray, NSSet, NSMutableDictionary, KNSlideCollectionSelection, TSKSelectionPath, TSDFreehandDrawingToolkitUIState, KNMacUILayout;

@interface KNUIState : NSObject <NSCopying, TSAUIState> {
    double _mobileCanvasViewScale;
    struct CGPoint { double x; double y; } _mobileCanvasOffset;
    double _desktopCanvasViewScale;
    struct CGPoint { double x; double y; } _desktopCanvasOffset;
    NSMutableDictionary *_chartUIState;
}

@property (copy, nonatomic) TSKSelectionPath *selectionPath;
@property (readonly, nonatomic) KNSlideCollectionSelection *slideTreeSelection;
@property (nonatomic) double canvasViewScale;
@property (nonatomic) struct CGPoint { double x0; double x1; } canvasOffset;
@property (copy, nonatomic) KNMacUILayout *documentUILayout;
@property (nonatomic) BOOL slideViewFitsContentInWindow;
@property (nonatomic) double lightTableZoomScale;
@property (nonatomic) BOOL lightTableHidesSkippedSlides;
@property (nonatomic) BOOL showsMobileLightTable;
@property (nonatomic) double mobileLightTableZoomScale;
@property (nonatomic) BOOL mobileLightTableHidesSkippedSlides;
@property (nonatomic) BOOL showsMobileOutline;
@property (nonatomic) struct CGPoint { double x; double y; } desktopMainWindowOrigin;
@property (nonatomic) struct CGSize { double width; double height; } desktopMainContentSize;
@property (nonatomic) double desktopElementListViewWidth;
@property (nonatomic) double desktopNavigatorViewWidth;
@property (nonatomic) double desktopOutlineViewWidth;
@property (nonatomic) double desktopPresenterNotesHeight;
@property (nonatomic) double desktopPresenterNotesScrollPosition;
@property (nonatomic) BOOL desktopOutlineViewDefaultFixed;
@property (copy, nonatomic) NSSet *collapsedSlideNodes;
@property (copy, nonatomic) NSSet *outlineCollapsedSlideNodes;
@property (copy, nonatomic) NSSet *outlineHasBodySlideNodes;
@property (copy, nonatomic) NSArray *elementListExpandedGroups;
@property (nonatomic) BOOL showSlideGuides;
@property (nonatomic) BOOL showMasterGuides;
@property (nonatomic) BOOL showsComments;
@property (nonatomic) BOOL showsRuler;
@property (nonatomic) BOOL commentsPrintingToggleEnabled;
@property (retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (nonatomic) BOOL editingDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)archivedUIStateInContext:(id)a0;
- (id)UIStateForChart:(id)a0;
- (void)setUIState:(id)a0 forChart:(id)a1;
- (void)resetForInitialViewing;
- (void)setSlideTreeSelection:(id)a0 withDocumentRoot:(id)a1;
- (void)updateOutlineStateFromSlideTree:(id)a0;
- (void)loadFromArchive:(const struct UIStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<2> { unsigned int x0[2]; } x2; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x3; struct RepeatedPtrField<TSCH::ChartUIState> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct Reference *x9; struct Reference *x10; struct Size *x11; struct Point *x12; struct Point *x13; struct Point *x14; struct Reference *x15; struct Point *x16; struct Size *x17; struct Point *x18; struct SelectionPathArchive *x19; struct Reference *x20; struct Reference *x21; float x22; float x23; float x24; float x25; float x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; float x31; float x32; float x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; float x38; float x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x44; } *)a0 unarchiver:(id)a1 context:(id)a2;
- (void)saveToArchive:(struct UIStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<2> { unsigned int x0[2]; } x2; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x3; struct RepeatedPtrField<TSCH::ChartUIState> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct Reference *x9; struct Reference *x10; struct Size *x11; struct Point *x12; struct Point *x13; struct Point *x14; struct Reference *x15; struct Point *x16; struct Size *x17; struct Point *x18; struct SelectionPathArchive *x19; struct Reference *x20; struct Reference *x21; float x22; float x23; float x24; float x25; float x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; float x31; float x32; float x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; float x38; float x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x44; } *)a0 archiver:(id)a1 context:(id)a2;

@end
