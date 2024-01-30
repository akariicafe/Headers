@class CNAvatarViewController, UIView;

@interface SMUAvatarViewController : NSObject {
    CNAvatarViewController *_avatarViewController;
}

@property (readonly, nonatomic) UIView *view;

+ (id)descriptorForRequiredKeys;

- (void)setContact:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
