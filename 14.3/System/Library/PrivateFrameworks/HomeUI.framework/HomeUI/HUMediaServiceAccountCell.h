@class HUMediaServiceAccountView, NSString, HFItem;
@protocol HUResizableCellDelegate;

@interface HUMediaServiceAccountCell : UITableViewCell <HUCellProtocol>

@property (retain, nonatomic) HUMediaServiceAccountView *mediaServiceAccountView;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
