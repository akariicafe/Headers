@class IDSService, NSString;

@interface IMMessageNotificationController : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *messageNotificationControllerIDSService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)dealloc;
- (id)init;
- (id)_copyIDForDevice:(id)a0;
- (id)_copyIDSIdentifierOrDefault:(id)a0;
- (BOOL)_deviceIsAudioAccessory:(id)a0;
- (void)_executeCommandFromMessageRequest:(id)a0;
- (BOOL)_isCurrentDeviceAudioAccessory;
- (void)_playTone;
- (void)_sendNotificationMessageRequest:(id)a0 toTokenURI:(id)a1;
- (BOOL)audioAccessoryDeviceWithTokenURIExists:(id)a0;
- (void)sendNotificationMessageToTokenURI:(id)a0 withCommmand:(long long)a1;
- (void)sendNotificationMessageToUniqueID:(id)a0 withCommmand:(long long)a1;

@end
