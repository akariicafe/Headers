@class NSString, HFItem, HUSoftwareUpdateInfoView;
@protocol HUResizableCellDelegate;

@interface HUSoftwareUpdateInfoTableViewCell : UITableViewCell <HUSoftwareUpdateInternalResizingDelegate, HUCellProtocol>

@property (readonly, nonatomic) HUSoftwareUpdateInfoView *infoView;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)a0;

@end
