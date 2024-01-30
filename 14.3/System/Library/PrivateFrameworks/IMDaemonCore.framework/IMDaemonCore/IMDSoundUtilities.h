@interface IMDSoundUtilities : NSObject

+ (long long)_soundTypeForMessage:(id)a0;
+ (void)_playSoundType:(long long)a0;
+ (long long)_smsSoundsToPlay;
+ (BOOL)_isSMSMessage:(id)a0;
+ (BOOL)_wasDowngraded:(id)a0;
+ (BOOL)_isSuppressedForGUID:(id)a0;
+ (void)_stopSuppressingForGUID:(id)a0;
+ (BOOL)_isAssociatedMessage:(id)a0;
+ (BOOL)_isAcknowledgmentMessage:(id)a0;
+ (BOOL)_isAutoPlay:(id)a0;
+ (void)_playSMSSound;
+ (void)_playAcknowledgmentSentSound;
+ (void)playMessageSentSoundIfNeeded:(id)a0;
+ (unsigned int)_installSystemSound:(id)a0;

@end
