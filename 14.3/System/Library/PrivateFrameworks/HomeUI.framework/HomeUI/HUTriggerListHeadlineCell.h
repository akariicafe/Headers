@class NSArray, HFItem, HUGridLayoutOptions, UILabel, NSString;
@protocol HUResizableCellDelegate;

@interface HUTriggerListHeadlineCell : UITableViewCell <HUCellProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layoutOptionsClass;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
