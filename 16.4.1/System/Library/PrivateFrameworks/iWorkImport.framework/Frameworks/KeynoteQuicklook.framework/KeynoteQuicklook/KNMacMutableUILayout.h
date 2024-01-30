@interface KNMacMutableUILayout : KNMacUILayout

@property (nonatomic, getter=isShowingSidebar) BOOL showingSidebar;
@property (nonatomic) long long sidebarViewMode;
@property (nonatomic, getter=isShowingLightTable) BOOL showingLightTable;
@property (nonatomic, getter=isShowingPresenterNotes) BOOL showingPresenterNotes;
@property (nonatomic) long long inspectorPaneHiddenState;
@property (nonatomic) long long inspectorPaneViewMode;
@property (nonatomic, getter=isShowingTemplateSlides) BOOL showingTemplateSlides;
@property (nonatomic, getter=isShowingElementList) BOOL showingElementList;
@property (nonatomic, getter=isShowingActivityStream) BOOL showingActivityStream;
@property (nonatomic) BOOL activityStreamWasShown;

- (void)setActivityStreamWasShown:(BOOL)a0;
- (void)setInspectorPaneHiddenState:(long long)a0;
- (void)setInspectorPaneViewMode:(long long)a0;
- (void)setShowingActivityStream:(BOOL)a0;
- (void)setShowingElementList:(BOOL)a0;
- (void)setShowingLightTable:(BOOL)a0;
- (void)setShowingPresenterNotes:(BOOL)a0;
- (void)setShowingSidebar:(BOOL)a0;
- (void)setShowingTemplateSlides:(BOOL)a0;
- (void)setSidebarViewMode:(long long)a0;

@end
