@class HUContactView, NSString, HFItem;
@protocol HUResizableCellDelegate;

@interface HUHomeUserCollectionViewCell : UICollectionViewCell <HUCellProtocol>

@property (retain, nonatomic) HUContactView *contactView;
@property (nonatomic) double avatarDiameter;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_requiredKeyDescriptors;

- (id)init;
- (void).cxx_destruct;
- (void)_createSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)setAvatarDiameter:(double)a0;
- (double)avatarDiameter;

@end
