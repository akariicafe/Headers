@class UIView, SBHLibraryCategory, NSString, SBIconListView, SBIcon, _UILegibilitySettings, SBHIconImageCache, SBFolderIconImageCache, SBFolder, NSArray, SBHLibraryCategoryPodBackgroundView;
@protocol SBIconViewProviding, SBIconListLayoutProvider, SBLeafIconDataSource, BSInvalidatable;

@interface SBHLibraryCategoryIconViewController : UIViewController <SBFolderObserver, SBHLibraryCategoryObserver, SBIconViewQuerying, SBIconViewCustomImageViewControlling, SBHLegibility> {
    SBHLibraryCategoryPodBackgroundView *_backgroundView;
    SBIconListView *_iconListView;
    id<BSInvalidatable> _preventFolderUpdateAssertion;
}

@property (readonly, nonatomic) SBHLibraryCategory *category;
@property (readonly, nonatomic) SBFolder *folder;
@property (readonly, nonatomic) NSString *location;
@property (weak, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (readonly, nonatomic) SBIconListView *iconListView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (readonly, nonatomic) SBIcon *icon;
@property (readonly, nonatomic) id<SBLeafIconDataSource> visiblyActiveDataSource;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL wantsEditingDisplayStyle;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (copy, nonatomic) id /* block */ backgroundViewProvider;
@property (copy, nonatomic) id /* block */ backgroundViewConfigurator;
@property (nonatomic) BOOL forcesEdgeAntialiasing;
@property (nonatomic) double brightness;
@property (readonly, nonatomic) BOOL wantsLabelHidden;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) BOOL showsSnapshotWhenDeactivated;
@property (nonatomic) unsigned long long imageViewAlignment;
@property (nonatomic) unsigned long long pauseReasons;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } minimumPreferredEdgeInsetsForContextMenu;
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } snapshotViewCenter;
@property (readonly, nonatomic) UIView *springLoadingEffectTargetView;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long x0; unsigned long long x1; } approximateLayoutPosition;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;
@property (readonly, nonatomic) double continuousCornerRadius;
@property (nonatomic) BOOL showsSquareCorners;

- (id)sourceView;
- (void)enumerateDisplayedIconViewsForIcon:(id)a0 usingBlock:(id /* block */)a1;
- (void)folder:(id)a0 didRemoveLists:(id)a1 atIndexes:(id)a2;
- (BOOL)isDisplayingIcon:(id)a0 inLocation:(id)a1;
- (id)presentedIconLocations;
- (void)folder:(id)a0 didAddList:(id)a1;
- (BOOL)isPresentingIconLocation:(id)a0;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)a0;
- (id)firstIconViewForIcon:(id)a0;
- (void)viewDidLoad;
- (id)firstIconViewForIcon:(id)a0 excludingLocations:(id)a1;
- (id)firstIconViewForIcon:(id)a0 inLocations:(id)a1;
- (BOOL)isDisplayingIcon:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)isDisplayingIconView:(id)a0;
- (id)iconViewForIcon:(id)a0 location:(id)a1;
- (BOOL)isDisplayingIcon:(id)a0 inLocations:(id)a1;
- (void)categoryDidUpdate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDisplayingIconView:(id)a0 inLocation:(id)a1;
- (void)categoryWillUpdate:(id)a0;
- (void)updateCategory:(id)a0 location:(id)a1;
- (void)updateFolder:(id)a0 location:(id)a1;

@end
