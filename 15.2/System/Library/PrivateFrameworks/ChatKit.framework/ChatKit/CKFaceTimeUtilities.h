@interface CKFaceTimeUtilities : NSObject

+ (BOOL)isFaceTimeVideoAvailable:(id)a0;
+ (void)showCallControlsForConversation:(id)a0;
+ (BOOL)isGroupFaceTimeSupported;
+ (BOOL)isFaceTimeAudioAvailable:(id)a0;
+ (BOOL)isDirectTelephonyAvailable;
+ (BOOL)isTelephonyAvailable;

@end
