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
@property (readonly, nonatomic, getter=isShowingTemplateSlides) BOOL showingTemplateSlides;
@property (readonly, nonatomic, getter=isShowingElementList) BOOL showingElementList;
@property (readonly, nonatomic, getter=isShowingActivityStream) BOOL showingActivityStream;
@property (readonly, nonatomic) BOOL activityStreamWasShown;
@property (readonly, nonatomic, getter=currentViewModeSupportsActivityStream) BOOL supportsActivityStream;

+ (id)uiLayoutFromArchive:(const void *)a0 unarchiver:(id)a1 context:(id)a2;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)archivedUILayoutInContext:(id)a0;
- (BOOL)inspectorPaneAutoHidden;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)setInspectorPaneAutoHidden:(BOOL)a0;
- (void)setShowingInspectorPane:(BOOL)a0;
- (BOOL)showingInspectorPane;

@end
