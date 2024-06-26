@class UIBarButtonItem, UILabel, PHCachingImageManager, UIVisualEffectView, UITapGestureRecognizer, MiroAssetSuggestionsCollectionViewController, MiroTimelineClipCollectionViewController, CALayer, UIView, NSLayoutConstraint, NSString, MiroEditorClipCollectionViewController, NSSet, UINavigationBar, UIToolbar, MiroEditorClipCell, PMTrimmerViewController, PMiOSProgressViewController, VEKProduction, PMClipCollectionProvider;
@protocol MiroContentEditorViewControllerDelegate;

@interface MiroContentEditorViewController : UIViewController <UINavigationBarDelegate, MiroEditorClipCellDelegate, PMTrimmerDelegate, MiroAssetSuggestionsCollectionViewControllerDelegate, MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate, PMClipCollectionProviderDelegate, PMClipProviderDelegate, MiroApplicationTestingEditorControlling>

@property (nonatomic) BOOL didCenterInitialClipOnFirstAppearance;
@property (weak, nonatomic) MiroEditorClipCollectionViewController *editorViewController;
@property (nonatomic) BOOL isPerformingInteractiveMovement;
@property (nonatomic) long long removeClipEnteredCount;
@property (nonatomic) BOOL didMakeEdits;
@property (copy, nonatomic) NSString *assetIdentifierToSnapToAfterAutoEdit;
@property (nonatomic) int clipMidTimeToSnapToAfterAutoEdit;
@property (copy, nonatomic) id /* block */ revertUserAssetChangesBlock;
@property (copy, nonatomic) id /* block */ commitUserAssetChangesBlock;
@property (retain, nonatomic) NSSet *currentAssetIDs;
@property (retain, nonatomic) CALayer *maskLayerCompact;
@property (retain, nonatomic) CALayer *maskLayerRegular;
@property (retain, nonatomic) UITapGestureRecognizer *thumbnailTapGR;
@property (weak, nonatomic) MiroEditorClipCell *trimmingCell;
@property (retain, nonatomic) PMTrimmerViewController *trimmer;
@property (retain, nonatomic) MiroAssetSuggestionsCollectionViewController *addRemoveCollectionPickerView;
@property (nonatomic) BOOL didTrim;
@property (weak, nonatomic) UINavigationBar *topToolbar;
@property (weak, nonatomic) UIToolbar *bottomToolbar;
@property (retain, nonatomic) UIBarButtonItem *doneBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *cancelBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *bottomPlayPauseBarButtonItem;
@property (weak, nonatomic) UIBarButtonItem *dislikeBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *durationBarButtonItem;
@property (weak, nonatomic) UILabel *toolbarDurationLabel;
@property (retain, nonatomic) UIBarButtonItem *debugAutoEditBarButtonItem;
@property (weak, nonatomic) UILabel *debugSongDescriptionLabel;
@property (weak, nonatomic) UILabel *debugTitleDescriptionLabel;
@property (weak, nonatomic) UILabel *debugEditStyleDescriptionLabel;
@property (weak, nonatomic) UILabel *debugFilterDescriptionLabel;
@property (weak, nonatomic) UIBarButtonItem *addBarButtonItem;
@property (weak, nonatomic) UIView *trimmerContainerView;
@property (retain, nonatomic) NSLayoutConstraint *trimmerTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trimmerLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trimmerTrailingConstraint;
@property (weak, nonatomic) UIView *timelineMaskView;
@property (weak, nonatomic) NSLayoutConstraint *timelineHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *timelineBottomConstraint;
@property (weak, nonatomic) NSLayoutConstraint *timelineLeftConstraint;
@property (weak, nonatomic) NSLayoutConstraint *timelineRightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolbarHeightConstraint;
@property (retain, nonatomic) UIVisualEffectView *navBarBlurEffectView;
@property (retain, nonatomic) UIVisualEffectView *trimmerBlurEffectView;
@property (retain, nonatomic) NSLayoutConstraint *topBlurEffectViewTrimmerConstraint;
@property (retain, nonatomic) UIVisualEffectView *bottomBlurEffectView;
@property (retain, nonatomic) NSLayoutConstraint *bottomBlurEffectViewHeightConstraint;
@property (retain, nonatomic) PMiOSProgressViewController *progressViewController;
@property (weak, nonatomic) id<MiroContentEditorViewControllerDelegate> delegate;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } initialStartTime;
@property (weak, nonatomic) MiroTimelineClipCollectionViewController *timelineViewController;
@property (retain, nonatomic) VEKProduction *production;
@property (retain, nonatomic) PMClipCollectionProvider *clipCollectionProvider;
@property (retain, nonatomic) PMClipCollectionProvider *previousClipCollectionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldCancelDownload;
@property (retain, nonatomic) PHCachingImageManager *imageManager;

- (BOOL)prefersStatusBarHidden;
- (void)didReceiveMemoryWarning;
- (long long)preferredStatusBarStyle;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_cancelProgress;
- (void)prepareForSegue:(id)a0 sender:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)navigationBar:(id)a0 shouldPopItem:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)assetSuggestionsControllerDidDismiss:(id)a0;
- (void)assetSuggestionsController:(id)a0 didFinishPickingAssets:(id)a1;
- (unsigned long long)assetSuggestionsController:(id)a0 clipCountForAsset:(id)a1;
- (void)_updateDebugLabelForClipCell:(id)a0;
- (id)assetSuggestionsController:(id)a0 debugMetadataForAsset:(id)a1;
- (void)debugAutoEditButtonTouchUpInside:(id)a0;
- (void)_updateDebugLabelsForVisibleTimelineClips;
- (id)pickListSplitDistanceForAsset:(id)a0;
- (BOOL)pickedLocallyAvailableScenesContainAsset:(id)a0;
- (void)trimmer:(id)a0 willStartTrimmingWithClipProvider:(id)a1;
- (BOOL)trimmer:(id)a0 shouldContinueTrimmingWithClipProvider:(id)a1 startTime:(float)a2 endTime:(float)a3;
- (void)trimmer:(id)a0 didContinueTrimmingWithClipProvider:(id)a1 startTime:(float)a2 endTime:(float)a3;
- (void)trimmer:(id)a0 didEndTrimmingWithClipProvider:(id)a1 startTime:(float)a2 endTime:(float)a3;
- (void)setupWithProduction:(id)a0 andResult:(id)a1;
- (void)_alertSomeAssetsFailedWithTitle:(id)a0 message:(id)a1 okActionBlock:(id /* block */)a2;
- (void)playCurrentCellIfPossible;
- (void)handleTapOnSnappedClip:(id)a0;
- (void)_setupToolbars;
- (void)_adjustSnappedClipWhenSplitScreenClosesWorkaround;
- (void)_updateInterfaceElementVisibilityForCell:(id)a0;
- (void)_updateTopToolbarVisibilityForCell:(id)a0 atIndexPath:(id)a1 animated:(BOOL)a2;
- (void)_configureToolbarsForTraitCollection:(id)a0;
- (void)_configureFadeMaskLayerForTraitCollection:(id)a0;
- (void)_setupNavigationBarAppearanceForContentEditor:(id)a0;
- (void)_setupEditorCollectionViewController:(id)a0;
- (void)_setupTimelineCollectionViewController:(id)a0;
- (void)_setupTrimmerInContainerView:(id)a0;
- (void)_configureClipControlBarMinimumSpacingForCells:(id)a0;
- (void)_setupTransparentBackgroundForNavigationBar:(id)a0;
- (void)_setupTransparentBackgroundForToolbar:(id)a0;
- (void)_commitEditChangesAndRefreshDebugOverlays:(id)a0;
- (void)_updateDurationLabelVisibilityAnimated:(BOOL)a0;
- (void)_updateBottomBarConstraintsForTraitCollection:(id)a0;
- (void)_updateItemNumberLabelForIndexPath:(id)a0;
- (void)_updatePlayPauseButtonForCell:(id)a0;
- (void)_updateTrimmerClipForCell:(id)a0;
- (void)_updateDurationLabel:(double)a0;
- (void)_configureTopToolbarForTraitCollection:(id)a0;
- (void)_configureBottomToolbarForTraitCollection:(id)a0;
- (id)_debugBarButtonItems;
- (id)_editorCellForIndexPath:(id)a0;
- (int)_middleFrameTimeForClipProvider:(id)a0;
- (id)_maskLayerWithFadeWidth:(double)a0;
- (void)_updateControlVisibilityOnCells:(id)a0;
- (void)doneButtonTouchUpInside:(id)a0;
- (void)_prepareForDismissal;
- (void)addWithCompletion:(id /* block */)a0;
- (void)removeClipAtIndexPath:(id)a0;
- (unsigned long long)_nearestClipIndexForAssetID:(id)a0 andClipMidTime:(int)a1;
- (void)_reloadCollectionViewsWithHintSnapToIndex:(unsigned long long)a0;
- (void)_alertSomeAssetsFailedToDownload:(unsigned long long)a0;
- (void)_updateThumbnailForCell:(id)a0 indexPath:(id)a1 startTime:(int)a2;
- (void)_scrollTimelineToTrackEditorContentOffset;
- (void)_updateTrimmerPlayerForCell:(id)a0;
- (void)handleChangedProgress:(double)a0 taskDescription:(id)a1;
- (void)editorClipCellWillStartPlaying:(id)a0;
- (void)editorClipCellDidStartPlaying:(id)a0;
- (void)editorClipCellDidStopPlaying:(id)a0;
- (BOOL)editorClipCellShouldShowCircularPlayButton:(id)a0;
- (void)editorClipCellDidChangeSpecialTreatment:(id)a0;
- (id)clipCollection:(id)a0 clipProviderAtIndex:(long long)a1;
- (long long)clipCollectionClipCount:(id)a0;
- (id)clipCollection:(id)a0 willSetClipProvider:(id)a1 onCell:(id)a2 indexPath:(id)a3;
- (void)clipCollection:(id)a0 didSetClipOnCell:(id)a1 indexPath:(id)a2;
- (void)clipCollection:(id)a0 didSnapToIndexPath:(id)a1;
- (void)clipCollection:(id)a0 didSelectIndexPath:(id)a1;
- (void)clipCollection:(id)a0 didBeginDisplayingCell:(id)a1 indexPath:(id)a2;
- (void)clipCollection:(id)a0 didEndDisplayingCell:(id)a1 indexPath:(id)a2;
- (void)clipCollection:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)clipCollectionDidScroll:(id)a0;
- (void)clipCollection:(id)a0 willBeginInteractiveMovementForItemAtIndexPath:(id)a1;
- (void)clipCollection:(id)a0 didEndInteractiveMovementForItemAtIndexPath:(id)a1;
- (void)clipCollection:(id)a0 didCancelInteractiveMovementForItemAtIndexPath:(id)a1;
- (void)clipCollectionProviderWillUpdateResults:(id)a0;
- (void)clipCollectionProviderDidUpdateResults:(id)a0 error:(id)a1;
- (void)_alertSomeAssetsFailed:(unsigned long long)a0 unsupported:(unsigned long long)a1;
- (void)_addAssets:(id)a0 removeAssets:(id)a1;
- (void)cancelButtonTouchUpInside:(id)a0;
- (void)addButtonTouchUpInside:(id)a0;
- (void)playPauseButtonTouchUpInside:(id)a0;
- (void)dislikeButtonTouchUpInside:(id)a0;
- (id)_assetsToAddToUsedAssetsForNewSelectedAssets:(id)a0;
- (id)_assetsToRemoveFromUsedAssetsForNewSelectedAssets:(id)a0;

@end
