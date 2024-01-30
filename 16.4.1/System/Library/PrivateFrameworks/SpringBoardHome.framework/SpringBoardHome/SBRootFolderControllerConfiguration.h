@class CHSWidgetDescriptorProvider, UIViewController, UIView;
@protocol SBHLegibility, SBHRootFolderCustomViewPresenting, SBHSearchPresenting, SBHSearchPresentable;

@interface SBRootFolderControllerConfiguration : SBFolderControllerConfiguration

@property (nonatomic, getter=isForSnapshot) BOOL forSnapshot;
@property (nonatomic, getter=isDockExternal) BOOL dockExternal;
@property (nonatomic, getter=isDockPinnedForRotation) BOOL dockPinnedForRotation;
@property (nonatomic) BOOL showsDoneButtonWhileEditing;
@property (nonatomic) unsigned long long showsAddWidgetButtonWhileEditingAllowedOrientations;
@property (retain, nonatomic) UIViewController *pullDownSearchViewController;
@property (retain, nonatomic) id<SBHSearchPresenting> searchPresenter;
@property (retain, nonatomic) UIViewController<SBHSearchPresentable> *searchPresentableViewController;
@property (retain, nonatomic) UIView<SBHLegibility> *scrollAccessoryAuxiliaryView;
@property (retain, nonatomic) UIView *scrollAccessoryBackgroundView;
@property (retain, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *leadingCustomViewController;
@property (retain, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *trailingCustomViewController;
@property (nonatomic) unsigned long long ignoresOverscrollOnFirstPageOrientations;
@property (nonatomic) unsigned long long ignoresOverscrollOnLastPageOrientations;
@property (nonatomic) unsigned long long folderPageManagementAllowedOrientations;
@property (retain, nonatomic) CHSWidgetDescriptorProvider *widgetDescriptorProvider;
@property (retain, nonatomic) UIViewController<SBHLegibility> *todayViewController;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
