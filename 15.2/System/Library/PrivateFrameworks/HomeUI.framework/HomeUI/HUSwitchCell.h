@class NSString, HFItem;
@protocol HUSwitchCellDelegate, HUResizableCellDelegate;

@interface HUSwitchCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>

@property (nonatomic, getter=isOn) BOOL on;
@property (weak, nonatomic) id<HUSwitchCellDelegate> delegate;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)_switch;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_toggleOn:(id)a0;

@end
