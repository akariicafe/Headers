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

@end
