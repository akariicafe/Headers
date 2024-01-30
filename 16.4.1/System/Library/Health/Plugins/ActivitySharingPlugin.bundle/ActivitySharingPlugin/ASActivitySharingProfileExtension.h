@class ASActivitySharingManager, HDProfile, NSString;

@interface ASActivitySharingProfileExtension : NSObject <HDProfileExtension, ASActivitySharingManagerProvider, ASActivitySharingPluginInterface>

@property (retain, nonatomic) ASActivitySharingManager *activitySharingManager;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activitySharingManagerForProfile:(id)a0;

- (id)initWithProfile:(id)a0;
- (id)allFriends;
- (void).cxx_destruct;

@end
