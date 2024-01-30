@class SBIcon, NSString, UIView, SBIconListView, _UILegibilitySettings, NSArray, SBFolder, MTMaterialView, UIGestureRecognizer;
@protocol SBPageManagementCellViewControllerDelegate, SBLeafIconDataSource;

@interface SBPageManagementCellViewController : UIViewController <UIGestureRecognizerDelegate, SBIconViewCustomImageViewControlling> {
    struct SBPageManagementCellMetrics { struct CGSize { double width; double height; } fullListViewSize; struct CGSize { double width; double height; } scaledListViewSize; struct UIEdgeInsets { double top; double left; double bottom; double right; } foregroundInsets; struct UIEdgeInsets { double top; double left; double bottom; double right; } backgroundInsets; double listViewHeightAdjustment; double listViewVerticalPositionAdjustment; double toggleButtonDiameter; double toggleButtonVerticalMargin; } _metrics;
}

@property (readonly, nonatomic) UIGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) SBIconListView *listView;
@property (readonly, nonatomic) MTMaterialView *listBackgroundView;
@property (readonly, nonatomic) UIView *listDimmingView;
@property (readonly, nonatomic) MTMaterialView *toggleButtonBackgroundView;
@property (readonly, nonatomic) SBFolder *folder;
@property (weak, nonatomic) id<SBPageManagementCellViewControllerDelegate> delegate;
@property (nonatomic) BOOL scalesListView;
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

- (void).cxx_destruct;
- (id)sourceView;
- (id)initWithListView:(id)a0 listBackgroundView:(id)a1 toggleButtonBackgroundView:(id)a2 folder:(id)a3 metrics:(struct SBPageManagementCellMetrics { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; double x4; double x5; double x6; double x7; })a4;
- (void)cleanUpListView;
- (void)cancelGestures;
- (id)listHighlightView;
- (void)setListHighlighted:(BOOL)a0;
- (void)listViewTapped:(id)a0;
- (id)pageManagementView;
- (void)loadView;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
