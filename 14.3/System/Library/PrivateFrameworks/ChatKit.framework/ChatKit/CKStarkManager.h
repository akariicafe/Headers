@class NSString, CKStarkConversationController;

@interface CKStarkManager : NSObject <CPTemplateApplicationSceneDelegate, CPInterfaceControllerDelegate, UISceneDelegate>

@property (class, readonly, nonatomic, getter=isCarPlayConnected) BOOL carPlayConnected;

@property (retain, nonatomic) CKStarkConversationController *conversationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_directActionSource;
+ (void)_activateSiriWithContext:(id)a0;
+ (void)activateForRecipient:(id)a0;
+ (void)activateForConversation:(id)a0;

- (void).cxx_destruct;
- (void)openSMSURL:(id)a0;
- (void)openURL:(id)a0 sourceApplication:(id)a1;
- (void)templateApplicationScene:(id)a0 didConnectInterfaceController:(id)a1;
- (void)templateApplicationScene:(id)a0 didDisconnectInterfaceController:(id)a1;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)scene:(id)a0 openURLContexts:(id)a1;

@end
