@class HULayoutContainerView, UIImageView, NSString, HFUserHandle, HUTitleDescriptionContentView;
@protocol CNAvatarViewController;

@interface HUPresenceUserCell : UITableViewCell <HUDisableableCellProtocol>

@property (readonly, nonatomic) UIImageView *checkmarkImageView;
@property (readonly, nonatomic) HUTitleDescriptionContentView *titleDescriptionView;
@property (readonly, nonatomic) id<CNAvatarViewController> avatarViewController;
@property (readonly, nonatomic) HULayoutContainerView *avatarContainerView;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *deviceName;
@property (retain, nonatomic) HFUserHandle *userHandle;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (nonatomic, getter=isLocationUnavailable) BOOL locationUnavailable;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_setupConstraints;
- (void)_updateCustomSeparatorInset;
- (void)_updateDescriptionText;

@end
