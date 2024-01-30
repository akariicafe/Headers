@class SBIcon, NSString, _UILegibilitySettings, SBIconListView, NSArray, UIView, SBHIconImageCache, SBFolderIconImageCache, SBFolder, SBHLibraryCategoryPodBackgroundView;
@protocol SBLeafIconDataSource, SBIconViewProviding, SBIconListLayoutProvider;

@interface SBHLibraryCategoryIconViewController : UIViewController <SBFolderObserver, SBIconViewQuerying, SBIconViewCustomImageViewControlling, SBHLegibility> {
    SBHLibraryCategoryPodBackgroundView *_backgroundView;
    SBIconListView *_iconListView;
}

@property (readonly, nonatomic) SBFolder *folder;
@property (readonly, nonatomic) NSString *location;
@property (retain, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (readonly, nonatomic) SBIconListView *iconListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic) SBIcon *icon;
@property (readonly, nonatomic) id<SBLeafIconDataSource> visiblyActiveDataSource;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic, getter=isBackgroundBlurEnabled) BOOL backgroundBlurEnabled;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (copy, nonatomic) id /* block */ backgroundViewProvider;
@property (nonatomic) double brightness;
@property (readonly, nonatomic) BOOL wantsLabelHidden;
@property (nonatomic, getter=isVisiblySettled) BOOL visiblySettled;
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled;
@property (nonatomic, getter=isPrivateModeEnabled) BOOL privateModeEnabled;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) unsigned long long imageViewAlignment;
@property (nonatomic) unsigned long long pauseReasons;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;
@property (readonly, nonatomic) double continuousCornerRadius;
@property (nonatomic) BOOL showsSquareCorners;

- (BOOL)isPresentingIconLocation:(id)a0;
- (void)enumerateDisplayedIconViewsForIcon:(id)a0 usingBlock:(id /* block */)a1;
- (id)firstIconViewForIcon:(id)a0 excludingLocations:(id)a1;
- (BOOL)isDisplayingIconView:(id)a0 inLocation:(id)a1;
- (BOOL)isDisplayingIcon:(id)a0;
- (id)iconViewForIcon:(id)a0 location:(id)a1;
- (void)folder:(id)a0 didRemoveLists:(id)a1 atIndexes:(id)a2;
- (id)firstIconViewForIcon:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDisplayingIcon:(id)a0 inLocation:(id)a1;
- (id)sourceView;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)firstIconViewForIcon:(id)a0 inLocations:(id)a1;
- (BOOL)isDisplayingIconView:(id)a0;
- (BOOL)isDisplayingIcon:(id)a0 inLocations:(id)a1;
- (id)presentedIconLocations;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)a0;
- (void)folder:(id)a0 didAddList:(id)a1;
- (void)updateFolder:(id)a0 location:(id)a1;
- (void)viewDidLoad;

@end
