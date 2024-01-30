@class UIViewController, CHSAvocadoDescriptorProvider;
@protocol SBHSidebarProvider, SBHLibraryProvider, SBHLegibility;

@interface SBRootFolderControllerConfiguration : SBFolderControllerConfiguration

@property (nonatomic, getter=isForSnapshot) BOOL forSnapshot;
@property (nonatomic, getter=isDockExternal) BOOL dockExternal;
@property (nonatomic, getter=isDockPinnedForRotation) BOOL dockPinnedForRotation;
@property (nonatomic) BOOL showsDoneButtonWhileEditing;
@property (nonatomic) BOOL showsAddWidgetButtonWhileEditing;
@property (retain, nonatomic) UIViewController *pullDownSearchViewController;
@property (retain, nonatomic) UIViewController<SBHLegibility> *todayViewController;
@property (retain, nonatomic) UIViewController<SBHLibraryProvider> *trailingCustomViewController;
@property (retain, nonatomic) UIViewController<SBHSidebarProvider> *sidebarViewController;
@property (nonatomic, getter=isSidebarVisible) BOOL sidebarVisible;
@property (nonatomic, getter=isSidebarPinned) BOOL sidebarPinned;
@property (nonatomic) unsigned long long sidebarAllowedOrientations;
@property (nonatomic) unsigned long long ignoresOverscrollOnFirstPageOrientations;
@property (nonatomic) unsigned long long ignoresOverscrollOnLastPageOrientations;
@property (nonatomic) unsigned long long folderPageManagementAllowedOrientations;
@property (retain, nonatomic) CHSAvocadoDescriptorProvider *avocadoDescriptorProvider;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithConfiguration:(id)a0;

@end
