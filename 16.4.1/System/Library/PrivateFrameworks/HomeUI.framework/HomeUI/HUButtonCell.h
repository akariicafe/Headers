@class NSString, HFItem;
@protocol HUResizableCellDelegate;

@interface HUButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>

@property (nonatomic, getter=isDestructive) BOOL destructive;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL textColorFollowsTintColor;
@property (nonatomic) BOOL hideTitle;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)updateTitle;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
