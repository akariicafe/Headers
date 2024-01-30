@class SBTitledHomeScreenButton, NSString, UITapGestureRecognizer, SBIconListView, SBRootFolderView, NSMapTable, SBPageManagementIcon, UILabel, UIScrollView;
@protocol SBDockOffscreenFractionModifying, BSInvalidatable;

@interface SBRootFolderViewPageManagementLayoutManager : NSObject <SBIconViewProviding, SBIconViewDelegate, SBIconListViewDragDelegate, SBPageManagementCellViewControllerDelegate, UIScrollViewDelegate, SBIconListViewDominoPivotAnimatorDelegate, SBRootFolderViewLayoutManager> {
    NSMapTable *_iconViewControllersByIcon;
    NSMapTable *_iconViewControllersByListModel;
    NSMapTable *_pageIconsByListModel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) SBTitledHomeScreenButton *doneButton;
@property (retain, nonatomic) SBIconListView *rootListView;
@property (retain, nonatomic) UIScrollView *pageManagementScrollView;
@property (retain, nonatomic) id<SBDockOffscreenFractionModifying> dockOffscreenAssertion;
@property (nonatomic) unsigned long long transitionCount;
@property (nonatomic) unsigned long long activeTransitionCount;
@property (retain, nonatomic) SBPageManagementIcon *draggingIcon;
@property (nonatomic) long long layoutAction;
@property (nonatomic) long long layoutConfiguration;
@property (retain, nonatomic) UITapGestureRecognizer *backgroundTapGestureRecognizer;
@property (retain, nonatomic) id<BSInvalidatable> dockBorrowedAssertion;
@property (retain, nonatomic) id<BSInvalidatable> pageControlBorrowedAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) SBRootFolderView *rootFolderView;
@property (retain, nonatomic) id userInfo;

- (BOOL)isIconViewRecycled:(id)a0;
- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (void)iconListView:(id)a0 willUseIconView:(id)a1 forDroppingIconDragItem:(id)a2;
- (id)iconListView:(id)a0 iconDropSessionDidUpdate:(id)a1;
- (id)dequeueReusableIconViewOfClass:(Class)a0;
- (void)iconListView:(id)a0 performIconDrop:(id)a1;
- (BOOL)iconViewCanBeginDrags:(id)a0;
- (BOOL)iconListView:(id)a0 canHandleIconDropSession:(id)a1;
- (void)iconViewWillBeginDrag:(id)a0 session:(id)a1;
- (void)iconListView:(id)a0 iconDropSession:(id)a1 didPauseAtLocation:(struct CGPoint { double x0; double x1; })a2;
- (void)iconListView:(id)a0 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)a1;
- (void).cxx_destruct;
- (void)iconView:(id)a0 item:(id)a1 willAnimateDragCancelWithAnimator:(id)a2;
- (void)iconListView:(id)a0 iconDragItem:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (void)layoutSubviewsInFolderView:(id)a0;
- (void)transitionToActive:(BOOL)a0 inFolderView:(id)a1 usingAnimator:(id)a2;
- (void)layoutScrollViewAndRootListViewInFolderView:(id)a0;
- (void)layoutTitleLabelsInFolderView:(id)a0;
- (void)layoutDoneButtonInFolderView:(id)a0 metrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x11; } *)a1;
- (id)firstNonHiddenAndValidIconListModelForFolderView:(id)a0 outListIndex:(long long *)a1 outPageIconListIndex:(long long *)a2;
- (void)makeRootListViewInFolderView:(id)a0 animated:(BOOL)a1;
- (void)backgroundTapped:(id)a0;
- (void)cleanUpViewsInFolderView:(id)a0;
- (unsigned long long)folderListIndexToAnimateOutForList:(id)a0 inFolder:(id)a1 avoidingList:(id)a2;
- (id)newCellBackgroundMaterialViewInFolderView:(id)a0 initialWeighting:(double)a1;
- (id)iconListView:(id)a0 previewForDroppingIconDragItem:(id)a1 proposedPreview:(id)a2;
- (void)pageManagementCellViewControllerDidReceiveTap:(id)a0;
- (void)dominoPivotAnimator:(id)a0 didLayOutIconView:(id)a1;
- (id)customImageViewControllerForIconView:(id)a0;
- (id)iconView:(id)a0 dragPreviewForItem:(id)a1 session:(id)a2 previewParameters:(id)a3;
- (void)iconListView:(id)a0 iconDropSessionDidExit:(id)a1;
- (void)iconView:(id)a0 willAnimateDragLiftWithAnimator:(id)a1 session:(id)a2;
- (void)iconListView:(id)a0 iconDropSessionDidEnter:(id)a1;
- (id)iconListView:(id)a0 customSpringAnimationBehaviorForDroppingItem:(id)a1;
- (BOOL)iconView:(id)a0 canAddDragItemsToSession:(id)a1;
- (BOOL)iconListView:(id)a0 shouldAllowSpringLoadedInteractionForIconDropSession:(id)a1 onIconView:(id)a2;
- (void)doneButtonTapped:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)recycleIconView:(id)a0;

@end
