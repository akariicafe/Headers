@interface DDFaceTimeAction : DDFaceTimeAudioAction

+ (BOOL)isAvailable;

- (id)localizedName;
- (id)iconName;
- (id)notificationTitle;
- (id)dialRequest;

@end
