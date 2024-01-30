@interface DDFaceTimeAudioAction : DDCallAction

+ (BOOL)isAvailable;

- (id)localizedName;
- (int)interactionType;
- (id)notificationTitle;
- (id)notificationIconBundleIdentifier;
- (id)callProvider;
- (id)dialRequest;

@end
