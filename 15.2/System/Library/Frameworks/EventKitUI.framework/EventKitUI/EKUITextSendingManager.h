@class NSString, UIViewController, MFMessageComposeViewController;

@interface EKUITextSendingManager : NSObject <MFMessageComposeViewControllerDelegate> {
    MFMessageComposeViewController *_composeViewController;
}

@property (readonly, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ messageSendingComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getPhone:(id *)a0 andEmail:(id *)a1 forContact:(id)a2;
+ (BOOL)messagingAvailable;
+ (id)addressesforRecipients:(id)a0;
+ (id)addressesForContacts:(id)a0;
+ (BOOL)canSendMessageToRecipients:(id)a0;
+ (BOOL)canSendMessageToContacts:(id)a0;

- (id)initWithRecipients:(id)a0;
- (id)initWithContacts:(id)a0;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)setupControllerWithAddresses:(id)a0;

@end
