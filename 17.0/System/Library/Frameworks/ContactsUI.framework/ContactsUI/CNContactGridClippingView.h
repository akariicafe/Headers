@class CAShapeLayer, CNAvatarView;

@interface CNContactGridClippingView : UIView

@property (weak, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) CAShapeLayer *actionsMaskLayer;
@property (nonatomic) BOOL masksToAvatar;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
