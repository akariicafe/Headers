@interface CKSOSUtilities : NSObject

@property (readonly, nonatomic, getter=isMMSEnabled) BOOL MMSEnabled;

+ (id)sharedUtilities;
+ (void)sendMessage:(id)a0 location:(id)a1 recipients:(id)a2;
+ (void)sendMessage:(id)a0 location:(id)a1 recipients:(id)a2 failureHandler:(id /* block */)a3;

- (void)sendMessage:(id)a0;
- (void)_sendMessageAndObserveNotification:(id)a0;
- (id)_sendMessageAndReturnGUIDs:(id)a0;
- (id)_uniqueFilePathForFilename:(id)a0;
- (BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
- (id)sendComposition:(id)a0 toConversation:(id)a1 useStandalone:(BOOL)a2;
- (void)sendMessage:(id)a0 location:(id)a1 recipients:(id)a2;
- (void)sendMessage:(id)a0 location:(id)a1 recipients:(id)a2 failureHandler:(id /* block */)a3;

@end
