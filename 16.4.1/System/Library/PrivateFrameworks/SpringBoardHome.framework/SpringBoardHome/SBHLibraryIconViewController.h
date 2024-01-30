@class SBIcon, NSString, NSArray, UIView, _UILegibilitySettings, SBHLibraryDismissalView, SBHLibraryCategoryStackView, SBHLibraryCategoriesFolderDataSource;
@protocol SBLeafIconDataSource, SBIconListLayoutProvider;

@interface SBHLibraryIconViewController : UIViewController <SBHLibraryCategoriesFolderDataSourceObserver, BSDescriptionProviding, SBIconViewCustomImageViewControlling> {
    id<SBIconListLayoutProvider> _listLayoutProvider;
    SBHLibraryCategoryStackView *_categoryStackView;
    SBHLibraryDismissalView *_dismissalView;
}

@property (retain, nonatomic) SBHLibraryCategoriesFolderDataSource *libraryDataSource;
@property (readonly, nonatomic) SBHLibraryCategoryStackView *categoryStackView;
@property (readonly, nonatomic) UIView *dismissalView;
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
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)succinctDescription;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithListLayoutProvider:(id)a0;
- (void).cxx_destruct;
- (void)_reloadCategoryViewsForDataSourceChangeAnimated:(BOOL)a0;
- (void)categoriesDataSource:(id)a0 shouldAnimateLayoutForCategories:(id)a1;
- (void)categoriesDataSourceNeedsAnimatedReload:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusEffectBounds;
- (struct CGPoint { double x0; double x1; })focusEffectCenter;

@end
