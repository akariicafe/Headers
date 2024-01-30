@class CNAvatarViewController, UIView;

@interface SMUAvatarViewController : NSObject {
    CNAvatarViewController *_avatarViewController;
}

@property (readonly, nonatomic) UIView *view;

+ (id)descriptorForRequiredKeys;

- (void)setContact:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
