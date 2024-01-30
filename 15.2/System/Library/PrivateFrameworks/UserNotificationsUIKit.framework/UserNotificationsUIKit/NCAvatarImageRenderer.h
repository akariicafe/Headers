@class CNAvatarImageRenderer;

@interface NCAvatarImageRenderer : NSObject {
    CNAvatarImageRenderer *_avatarRenderer;
}

+ (id)sharedInstance;
+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)_init;
- (id)imageForContacts:(id)a0 compatibleWithTraitCollection:(id)a1;

@end
