@class HUDownloadControl, NSString, HFItem;
@protocol HUResizableCellDelegate;

@interface HUDownloadControlCell : UITableViewCell <HUCellProtocol>

@property (retain, nonatomic) HUDownloadControl *downloadControl;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
