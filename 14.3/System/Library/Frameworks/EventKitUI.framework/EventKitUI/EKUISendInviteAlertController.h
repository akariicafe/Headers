@class UIAlertController, NSString;

@interface EKUISendInviteAlertController : NSObject <UIActionSheetDelegate>

@property (copy) id /* block */ completionHandler;
@property (retain) UIAlertController *alertController;
@property (retain) EKUISendInviteAlertController *strongSelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newAlertControllerWithCompletionHandler:(id /* block */)a0;
+ (id)presentInviteAlertWithOptions:(unsigned long long)a0 viewController:(id)a1 withCompletionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)cancelAnimated:(BOOL)a0;
- (void)_completeWithSelection:(int)a0;
- (void)dealloc;
- (BOOL)_useSheetForViewController:(id)a0;
- (void)_presentAlertWithOptions:(unsigned long long)a0 viewController:(id)a1;

@end
