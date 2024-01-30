@interface DDFaceTimeAction : DDFaceTimeAudioAction

+ (BOOL)isAvailable;

- (id)localizedName;
- (id)notificationTitle;
- (id)iconName;
- (id)dialRequest;

@end
