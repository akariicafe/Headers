@class NSArray, NSDictionary, NSString, UICollectionView, UIView, UIGestureRecognizer;
@protocol DOCTagsCollectionCellMenuTarget, DOCTagsCollectionViewDelegate;

@interface DOCTagsCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, DOCTagsCollectionItemContentViewDelegate, UIGestureRecognizerDelegate> {
    struct CGSize { double width; double height; } _lastIntrinsicContentSize;
    UICollectionView *_collectionView;
    id _calloutMenuTargetIdentity;
    UIView<DOCTagsCollectionCellMenuTarget> *_calloutMenuTarget;
    UIGestureRecognizer *_cellLongPressGestureRecognizer;
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
- (void)reloadData;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_commonInit;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (id)cellForIndexPath:(id)a0 dequeueCell:(id /* block */)a1;
- (void)setupCells:(id)a0 registerClasses:(BOOL)a1;
- (void)_setupCalloutMenuGestureHandling;
- (void)_updateForContentCategorySize;
- (void)_reloadCalloutMenuTarget;
- (void)tagsCollectionItem:(id)a0 didDeleteTag:(id)a1;
- (void)longPressGestureRecognizerHandler:(id)a0;
- (id)_cellMenuTargetForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setCalloutMenuTarget:(id)a0;
- (id)_cellMenuTargetForIndexPath:(id)a0;
- (void)_clearCalloutMenuTarget;

@end
