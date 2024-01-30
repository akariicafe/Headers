@class NSUserDefaults, NSArray, NSDictionary, NSString, UICollectionView, UIView, UIGestureRecognizer;
@protocol DOCTagsCollectionCellMenuTarget, DOCTagsCollectionViewDelegate;

@interface DOCTagsCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, DOCTagsCollectionItemContentViewDelegate, UIGestureRecognizerDelegate> {
    struct CGSize { double width; double height; } _lastIntrinsicContentSize;
    UICollectionView *_collectionView;
    id _calloutMenuTargetIdentity;
    UIView<DOCTagsCollectionCellMenuTarget> *_calloutMenuTarget;
    UIGestureRecognizer *_cellLongPressGestureRecognizer;
    NSUserDefaults *_userDefaults;
}

@property (readonly, nonatomic) NSDictionary *sizingCells;
@property (weak, nonatomic) id<DOCTagsCollectionViewDelegate> delegate;
@property (retain, nonatomic) NSArray *tags;
@property (nonatomic) BOOL showsAddTagButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_layout;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemsAtIndexPaths:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)reloadData;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)_cellMenuTargetForIndexPath:(id)a0;
- (id)_cellMenuTargetForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_clearCalloutMenuTarget;
- (void)_reloadCalloutMenuTarget;
- (void)_setCalloutMenuTarget:(id)a0;
- (void)_setupCalloutMenuGestureHandling;
- (BOOL)_supportsTagsCollectionContextMenu;
- (void)_updateForContentCategorySize;
- (id)cellForIndexPath:(id)a0 dequeueCell:(id /* block */)a1;
- (void)longPressGestureRecognizerHandler:(id)a0;
- (void)setupCells:(id)a0 registerClasses:(BOOL)a1;
- (void)tagsCollectionItem:(id)a0 didDeleteTag:(id)a1;

@end
