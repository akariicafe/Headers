@interface IMSharedMessageSendingUtilities : NSObject

@property long long serviceAvailability;

+ (id)sharedInstance;
+ (void)initialize;
+ (void)_setupAccountMonitor;

- (BOOL)canSendPhotos:(int)a0 videos:(int)a1 audioClips:(int)a2;
- (BOOL)isMMSEnabled;
- (BOOL)isiMessageEnabled;
- (BOOL)_hasSMSCapability;
- (BOOL)_canSendText;
- (BOOL)canSendText;
- (id)_managedConfigAppAllowlist;
- (void)_updateServiceAvailability;
- (BOOL)_isiMessageSupported;
- (long long)_maxMMSAttachmentCount;
- (long long)_maxMMSMessageByteCount;
- (BOOL)isSupportedAttachmentUTI:(id)a0;

@end
