@class HULockupView, NSString, HFItem, UIView;
@protocol HUResizableCellDelegate;

@interface HULockupCollectionViewCell : UICollectionViewCell <HULockupInternalResizingDelegate, HUCellProtocol, HUCollectionViewCellSeparatorsProtocol>

@property (readonly, nonatomic) UIView *topSeparatorView;
@property (readonly, nonatomic) UIView *bottomSeparatorView;
@property (readonly, nonatomic) HULockupView *lockupView;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (nonatomic) BOOL topSeparatorVisible;
@property (nonatomic) BOOL bottomSeparatorVisible;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)didUpdateRequiredHeightForLockupView:(id)a0;
- (Class)lockupViewClass;

@end
