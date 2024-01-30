@class NSString, HFItem;
@protocol HUResizableCellDelegate;

@interface HUTableViewCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>

@property (nonatomic) BOOL titleColorFollowsTintColor;
@property (nonatomic) BOOL valueColorFollowsTintColor;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

@end
