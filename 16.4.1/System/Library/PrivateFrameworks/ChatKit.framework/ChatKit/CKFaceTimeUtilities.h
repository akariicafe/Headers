@interface CKFaceTimeUtilities : NSObject

+ (BOOL)isDirectTelephonyAvailable;
+ (BOOL)isFaceTimeAudioAvailable:(id)a0;
+ (BOOL)isFaceTimeVideoAvailable:(id)a0;
+ (BOOL)isGroupFaceTimeSupported;
+ (BOOL)isTelephonyAvailable;
+ (void)showCallControlsForConversation:(id)a0;

@end
