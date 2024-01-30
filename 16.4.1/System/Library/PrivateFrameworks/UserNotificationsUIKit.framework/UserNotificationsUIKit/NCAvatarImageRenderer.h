@class NSObject, CNAvatarImageRenderer;
@protocol OS_dispatch_queue;

@interface NCAvatarImageRenderer : NSObject {
    CNAvatarImageRenderer *_avatarRenderer;
    NSObject<OS_dispatch_queue> *_avatarImageGenerationQueue;
    unsigned long long _avatarImageGenerationQueueUsageCount;
}

+ (id)sharedInstance;

- (id)_init;
- (void).cxx_destruct;
- (void)_decrementAvatarImageGenerationQueueUsageCountAndInvalidateIfNeeded;
- (id)_getAvatarImageGenerationQueueAndIncrementUsageCount;
- (id)_imageNamed:(id)a0 inBundleIdentifier:(id)a1 traitCollection:(id)a2;
- (id)_mainQueue_imageForContacts:(id)a0 compatibleWithTraitCollection:(id)a1;
- (id)_systemImageNamed:(id)a0 traitCollection:(id)a1;
- (void)renderAvatarForRequest:(id)a0 compatibleWithTraitCollection:(id)a1 completion:(id /* block */)a2;

@end
