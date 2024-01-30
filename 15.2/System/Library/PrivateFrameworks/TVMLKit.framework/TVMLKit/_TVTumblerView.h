@class NSMutableDictionary, UIImageView, UISwipeGestureRecognizer, UIView, UITapGestureRecognizer;
@protocol _TVTumblerViewDataSource, _TVTumblerViewDelegate;

@interface _TVTumblerView : UIView {
    struct { unsigned char respondsToDidFocusItemAtIndex : 1; } _delegateFlags;
}

@property (retain, nonatomic) Class itemViewClass;
@property (readonly, retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *referredFocusedItemView;
@property (readonly, retain, nonatomic) UIImageView *arrowLeft;
@property (readonly, retain, nonatomic) UIImageView *arrowRight;
@property (readonly, retain, nonatomic) UIImageView *arrowLeading;
@property (readonly, retain, nonatomic) UIImageView *arrowTrailing;
@property (retain, nonatomic) UIView *spareItemView;
@property (readonly, retain, nonatomic) NSMutableDictionary *itemViewsByIndex;
@property (nonatomic) long long unfocusedItemIndex;
@property (readonly, nonatomic) BOOL canMove;
@property (readonly, retain, nonatomic) UITapGestureRecognizer *leftTapGesture;
@property (readonly, retain, nonatomic) UITapGestureRecognizer *rightTapGesture;
@property (readonly, retain, nonatomic) UISwipeGestureRecognizer *leftSwipeGesture;
@property (readonly, retain, nonatomic) UISwipeGestureRecognizer *rightSwipeGesture;
@property (weak, nonatomic) id<_TVTumblerViewDataSource> dataSource;
@property (weak, nonatomic) id<_TVTumblerViewDelegate> delegate;
@property (weak, nonatomic) UIView *gestureTargetView;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) long long focusedItemIndex;
@property (readonly, retain, nonatomic) UIView *focusedItemView;
@property (nonatomic) double interitemSpacing;

- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (void)_rightAction:(id)a0;
- (void)_leftAction:(id)a0;
- (void)_enableMove;
- (void)_markItemViewForReuse:(id)a0;
- (id)_itemViewAtIndex:(long long)a0;
- (void)_markItemViewForInUse:(id)a0 forIndex:(long long)a1;
- (void)_scheduleMoveToIndex:(long long)a0;
- (void)_disableMove;
- (void)registerItemViewClass:(Class)a0;
- (id)dequeueReusableItemView;

@end
