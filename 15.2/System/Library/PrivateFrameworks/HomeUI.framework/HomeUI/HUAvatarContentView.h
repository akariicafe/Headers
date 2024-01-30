@class UIListContentView, NSArray, NSString, UIView, NSLayoutConstraint, HFUserHandle;
@protocol CNAvatarViewController, UIContentConfiguration;

@interface HUAvatarContentView : UIView <UIContentView>

@property (retain, nonatomic) UIListContentView *listContentView;
@property (readonly, nonatomic) id<CNAvatarViewController> avatarViewController;
@property (readonly, nonatomic) UIView *avatarView;
@property (retain, nonatomic) NSArray *dynamicConstraints;
@property (retain, nonatomic) NSLayoutConstraint *avatarWidth;
@property (retain, nonatomic) HFUserHandle *userHandle;
@property (nonatomic) double avatarSize;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
