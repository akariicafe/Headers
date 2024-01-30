@class UIColor, HFItem, HUColoredButton, NSString;
@protocol HUColoredButtonCellDelegate, HUResizableCellDelegate;

@interface HUColoredButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>

@property (retain, nonatomic) HUColoredButton *button;
@property (weak, nonatomic) id<HUColoredButtonCellDelegate> delegate;
@property (nonatomic) BOOL buttonColorFollowsTintColor;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)tintColorDidChange;
- (void)buttonPressed:(id)a0;
- (void)updateButtonColor;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
