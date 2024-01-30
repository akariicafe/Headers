@class NSArray, UIImageView, HFItem, UILabel, NSString;
@protocol HUResizableCellDelegate;

@interface HUMediaServiceAccountView : UIView <HUCellProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *serviceNameLabel;
@property (retain, nonatomic) UILabel *accountHandleLabel;
@property BOOL iconImageLoadingInProgress;
@property (retain, nonatomic) NSArray *currentConstraints;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_loadServiceIconImage;

@end
