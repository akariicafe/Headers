@class UNUserNotificationCenter, NSString, UIAlertController, UIViewController, AXAssertion, AXHearingAidDisplayController;

@interface HearingAidUIServer : NSObject <AXUIService, AXUIContentViewControllerDelegate> {
    UIAlertController *_handoffAlertController;
    UIViewController *_emptyViewController;
}

@property (retain, nonatomic) AXAssertion *disableSystemGestureAssertion;
@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (retain, nonatomic) AXHearingAidDisplayController *displayController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createUserNotificationRequest:(id)a0;
- (double)desiredWindowLevelForContentViewController:(id)a0 userInteractionEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (void)setNewDisplayController:(id)a0;
- (id)processMessage:(id)a0 withIdentifier:(unsigned long long)a1 fromClientWithIdentifier:(id)a2 error:(id *)a3;
- (void)dealloc;

@end
