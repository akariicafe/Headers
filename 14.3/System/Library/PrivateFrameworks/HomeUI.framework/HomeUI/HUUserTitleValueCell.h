@class HFUserHandle, UIView;
@protocol CNAvatarViewController;

@interface HUUserTitleValueCell : HUTitleValueCell

@property (readonly, nonatomic) id<CNAvatarViewController> avatarViewController;
@property (readonly, nonatomic) UIView *avatarView;
@property (retain, nonatomic) HFUserHandle *userHandle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_setupConstraints;

@end
