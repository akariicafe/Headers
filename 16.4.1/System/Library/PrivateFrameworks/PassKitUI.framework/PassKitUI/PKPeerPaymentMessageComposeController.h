@class NSString, UIViewController, MSMessage;

@interface PKPeerPaymentMessageComposeController : NSObject <MFMessageComposeViewControllerDelegate> {
    id /* block */ _completionHandler;
}

@property (weak, nonatomic) UIViewController *currentHostController;
@property (readonly, nonatomic) MSMessage *message;
@property (readonly, copy, nonatomic) NSString *recipientAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
