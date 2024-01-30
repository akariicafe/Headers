@class PKDocumentRequest, UIViewController, UIImage;
@protocol PKPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentDocumentSubmissionController : NSObject

@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (nonatomic) long long context;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic) long long state;
@property (nonatomic) long long side;
@property (weak, nonatomic) UIViewController<PKPaymentDocumentSubmissionControllerDelegate> *delegate;
@property (retain, nonatomic) PKDocumentRequest *selectedDocument;
@property (retain, nonatomic) UIImage *frontID;
@property (retain, nonatomic) UIImage *backID;

- (void)uploadID;
- (void).cxx_destruct;
- (void)stateChanged;
- (void)capturedImage:(id)a0;
- (void)userWantsToCancel;
- (void)terminateSetupFlow;
- (void)captureFailedWithError:(id)a0;
- (void)userWantsToContinue;
- (void)userApprovedCapturedID;
- (void)tryUploadAgain;
- (void)userRejectedCapturedID;
- (id)nextViewController;
- (void)scanAgain;
- (id)initWithSetupDelegate:(id)a0 context:(long long)a1 acceptableDocuments:(id)a2 featureIdentifier:(unsigned long long)a3;
- (void)contactApplePressed;

@end
