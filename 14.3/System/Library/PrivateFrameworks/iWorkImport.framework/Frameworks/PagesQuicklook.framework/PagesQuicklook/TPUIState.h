@class NSString, NSDictionary, TSDFreehandDrawingToolkitUIState, TSKSelectionPath, TSKPencilAnnotationUIState, TSKAnnotationAuthor;

@interface TPUIState : NSObject <NSCopying, TSAUIState> {
    BOOL _masterDrawablesSelectable;
    BOOL _wordCountHUDVisible;
    int _wordCountHUDType;
    struct CGPoint { double x; double y; } _wordCountHUDPosition;
    BOOL _shouldShowCommentSidebar;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (copy, nonatomic) NSDictionary *chartUIState;
@property (nonatomic) BOOL rulersVisible;
@property (nonatomic) BOOL layoutBordersVisible;
@property (nonatomic) BOOL showsComments;
@property (readonly, nonatomic) BOOL hasShowsCTMarkup;
@property (nonatomic) BOOL showsCTMarkup;
@property (readonly, nonatomic) BOOL hasShowsCTDeletions;
@property (nonatomic) BOOL showsCTDeletions;
@property (nonatomic) BOOL changeTrackingPaused;
@property (nonatomic) BOOL showsPageNavigator;
@property (nonatomic) BOOL showsTOCNavigator;
@property (nonatomic) BOOL pencilAnnotationsHidden;
@property (nonatomic) long long viewScaleMode;
@property (nonatomic) long long pageViewState;
@property (nonatomic) double viewScale;
@property (copy, nonatomic) NSString *selectedInspectorSwitchSegmentIdentifier;
@property (nonatomic) BOOL inspectorHidden;
@property (nonatomic) BOOL showUserDefinedGuides;
@property (copy, nonatomic) NSString *authorForFilteringName;
@property (retain, nonatomic) TSKAnnotationAuthor *authorForFiltering;
@property (retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (retain, nonatomic) TSKPencilAnnotationUIState *pencilAnnotationUIState;
@property (nonatomic) long long viewScaleModeiOS;
@property (nonatomic) double presentationAutoScrollSpeed;
@property (nonatomic) BOOL showUserDefinedMasterGuides;
@property (nonatomic) BOOL editingDisabled;
@property (copy, nonatomic) TSKSelectionPath *selectionPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct UIStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<2> { unsigned int x0[2]; } x2; struct RepeatedPtrField<TSCH::ChartUIState> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct Point *x6; struct Reference *x7; struct Reference *x8; struct Size *x9; struct Point *x10; struct Size *x11; struct SelectionPathArchive *x12; struct SelectionPathArchive *x13; struct Reference *x14; struct Reference *x15; struct Reference *x16; struct Reference *x17; float x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; int x23; unsigned int x24; float x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; float x30; int x31; float x32; BOOL x33; BOOL x34; BOOL x35; float x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; int x41; BOOL x42; BOOL x43; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x44; } *)a0 unarchiver:(id)a1;
- (id)archivedUIStateInContext:(id)a0;
- (id)UIStateForChart:(id)a0;
- (void)setUIState:(id)a0 forChart:(id)a1;
- (void)resetForInitialViewing;
- (void)saveToArchive:(struct UIStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<2> { unsigned int x0[2]; } x2; struct RepeatedPtrField<TSCH::ChartUIState> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct Point *x6; struct Reference *x7; struct Reference *x8; struct Size *x9; struct Point *x10; struct Size *x11; struct SelectionPathArchive *x12; struct SelectionPathArchive *x13; struct Reference *x14; struct Reference *x15; struct Reference *x16; struct Reference *x17; float x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; int x23; unsigned int x24; float x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; float x30; int x31; float x32; BOOL x33; BOOL x34; BOOL x35; float x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; int x41; BOOL x42; BOOL x43; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x44; } *)a0 archiver:(id)a1 context:(id)a2;
- (BOOL)isEqualToUIState:(id)a0;

@end
