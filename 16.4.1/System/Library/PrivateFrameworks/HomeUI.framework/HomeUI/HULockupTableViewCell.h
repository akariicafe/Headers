@class NSString, HFItem, HULockupView;
@protocol HUResizableCellDelegate;

@interface HULockupTableViewCell : UITableViewCell <HULockupInternalResizingDelegate, HUCellProtocol>

@property (readonly, nonatomic) HULockupView *lockupView;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (Class)lockupViewClass;
- (void)didUpdateRequiredHeightForLockupView:(id)a0;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
