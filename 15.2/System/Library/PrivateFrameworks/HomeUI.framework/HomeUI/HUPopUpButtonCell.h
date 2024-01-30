@class UIButton, NSString, HFItem;
@protocol HUResizableCellDelegate;

@interface HUPopUpButtonCell : UITableViewCell <HUCellProtocol>

@property (readonly, nonatomic) UIButton *button;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
