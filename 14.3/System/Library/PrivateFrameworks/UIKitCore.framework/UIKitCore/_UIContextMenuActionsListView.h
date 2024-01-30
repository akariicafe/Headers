@class UIView, UIMenu, NSDate, _UIContextMenuSelectionGestureRecognizer, _UICutoutShadowView, NSString, UICollectionViewDiffableDataSource, UIHoverGestureRecognizer, UICollectionView, UISelectionFeedbackGenerator, _UIContextMenuSelectionDelayGestureRecognizer, NSIndexPath;
@protocol _UIContextMenuActionsListViewDelegate;

@interface _UIContextMenuActionsListView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIMenu *displayedMenu;
@property (retain, nonatomic) UICollectionView *currentCollectionView;
@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) _UICutoutShadowView *shadowView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource;
@property (retain, nonatomic) _UIContextMenuSelectionGestureRecognizer *selectionGestureRecognizer;
@property (retain, nonatomic) _UIContextMenuSelectionDelayGestureRecognizer *selectionDelayGestureRecognizer;
@property (retain, nonatomic) NSDate *appearanceDate;
@property (retain, nonatomic) UIHoverGestureRecognizer *highlightHoverGestureRecognizer;
@property (copy, nonatomic) NSIndexPath *highlightedIndexPath;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id<_UIContextMenuActionsListViewDelegate> delegate;
@property (nonatomic) BOOL surfacesActionRadius;
@property (nonatomic) BOOL showsShadow;
@property (nonatomic) BOOL showsTitle;
@property (nonatomic) BOOL reversesActionOrder;
@property (nonatomic) BOOL scrubbingEnabled;
@property (nonatomic) struct CGSize { double width; double height; } visibleContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDisplayedMenu:(id)a0 withAnimationStyle:(unsigned long long)a1 alongsideAnimations:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_setHighlightedIndexPath:(id)a0 animated:(BOOL)a1 playFeedback:(BOOL)a2;
- (void)_updateSelectionGestureAllowableMovement;
- (void)kickstartActionScrubbingWithGesture:(id)a0;
- (void)_configureCell:(id)a0 forElement:(id)a1 section:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)layoutSubviews;
- (void)_sizeClippingAndCollectionViews;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithWidth:(double)a0;
- (id)_dataSourceForCollectionView:(id)a0;
- (void)_performActionForElement:(id)a0;
- (void)_handleSelectionGesture:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleHoverGestureRecognizer:(id)a0;
- (double)_clampedCornerRadius;
- (void)_testing_tapAnAction;
- (void)scrollToFirstAction;

@end
