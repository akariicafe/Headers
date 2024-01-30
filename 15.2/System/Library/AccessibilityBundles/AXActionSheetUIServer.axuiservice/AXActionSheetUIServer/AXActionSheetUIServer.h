@class NSString, UIAlertController, NSMutableSet, UIViewController;

@interface AXActionSheetUIServer : NSObject <AXUIAlertDelegate, AXUIService, AXUIContentViewControllerDelegate> {
    UIAlertController *_alertController;
    UIViewController *_emptyViewController;
    NSMutableSet *_actionSheetClients;
}

@property (retain, nonatomic) NSString *alertIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)desiredWindowLevelForContentViewController:(id)a0 userInteractionEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (id)processMessage:(id)a0 withIdentifier:(unsigned long long)a1 fromClientWithIdentifier:(id)a2 error:(id *)a3;
- (void)alertWithIdentifierDidDisappear:(id)a0;
- (void)alertWithIdentifierWasActivated:(id)a0;
- (void)_informClientOfChoice:(long long)a0;

@end
