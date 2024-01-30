@interface DDFaceTimeAction : DDFaceTimeAudioAction

+ (BOOL)isAvailable;

- (id)icon;
- (id)localizedName;
- (id)notificationTitle;
- (id)dialRequest;

@end
