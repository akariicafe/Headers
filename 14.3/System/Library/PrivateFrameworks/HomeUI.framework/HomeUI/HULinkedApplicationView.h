@class HFItem, NSString, NSArray, NSURL, UIImageView, UIButton, HULinkedApplicationRatingView, UILabel;
@protocol HUResizableCellDelegate;

@interface HULinkedApplicationView : UIView <HUCellProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *publisherLabel;
@property (retain, nonatomic) HULinkedApplicationRatingView *ratingView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *installedLabel;
@property (retain, nonatomic) UIButton *viewButton;
@property (nonatomic) BOOL isInstalled;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSArray *currentConstraints;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_viewButtonTapped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
