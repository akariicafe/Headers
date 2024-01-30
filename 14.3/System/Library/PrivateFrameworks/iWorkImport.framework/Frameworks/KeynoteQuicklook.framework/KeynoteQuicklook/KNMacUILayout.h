@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying> {
    BOOL _showingInspectorPane;
    BOOL _inspectorPaneAutoHidden;
    BOOL _showingNavigatorViewInSidebar;
}

@property (readonly, nonatomic, getter=p_isShowingNavigatorViewInSidebar) BOOL p_showingNavigatorViewInSidebar;
@property (readonly, nonatomic, getter=isShowingSidebar) BOOL showingSidebar;
@property (readonly, nonatomic) long long sidebarViewMode;
@property (readonly, nonatomic, getter=isShowingLightTable) BOOL showingLightTable;
@property (readonly, nonatomic, getter=isShowingPresenterNotes) BOOL showingPresenterNotes;
@property (readonly, nonatomic) long long inspectorPaneHiddenState;
@property (readonly, nonatomic) long long inspectorPaneViewMode;
@property (readonly, nonatomic, getter=isShowingMasterSlides) BOOL showingMasterSlides;
@property (readonly, nonatomic, getter=isShowingElementList) BOOL showingElementList;

+ (id)uiLayoutFromArchive:(const struct DesktopUILayoutArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; int x9; BOOL x10; BOOL x11; BOOL x12; } *)a0 unarchiver:(id)a1 context:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct DesktopUILayoutArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; int x9; BOOL x10; BOOL x11; BOOL x12; } *)a0 archiver:(id)a1;
- (void)setShowingInspectorPane:(BOOL)a0;
- (void)setInspectorPaneAutoHidden:(BOOL)a0;
- (BOOL)showingInspectorPane;
- (BOOL)inspectorPaneAutoHidden;
- (id)archivedUILayoutInContext:(id)a0;

@end
