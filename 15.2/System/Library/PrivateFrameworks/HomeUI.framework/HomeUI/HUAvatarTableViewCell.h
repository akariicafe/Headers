@class HUAvatarContentView, HFItem, NSString, HFUserHandle, UIView;
@protocol CNAvatarViewController, HUResizableCellDelegate, UIContentConfiguration;

@interface HUAvatarTableViewCell : UITableViewCell <HUCellProtocol> {
    id<UIContentConfiguration> _contentConfiguration;
}

@property (readonly, nonatomic) id<CNAvatarViewController> avatarViewController;
@property (readonly, nonatomic) UIView *avatarView;
@property (retain, nonatomic) HUAvatarContentView *avatarContentView;
@property (retain, nonatomic) HFUserHandle *userHandle;
@property (nonatomic) double avatarSize;
@property (nonatomic) BOOL showAccessLevelDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)setContentConfiguration:(id)a0;
- (id)contentConfiguration;
- (void)prepareForReuse;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
