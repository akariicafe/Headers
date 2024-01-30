@class NSBundle, NSString, UIImage, PKDocumentRequest, UIViewController;
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
@property (readonly, nonatomic) NSBundle *localizationBundle;
@property (readonly, nonatomic) NSString *preferredLanguage;

- (void).cxx_destruct;
- (void)uploadID;
- (void)captureFailedWithError:(id)a0;
- (void)capturedImage:(id)a0;
- (void)contactApplePressed;
- (id)initWithSetupDelegate:(id)a0 context:(long long)a1 acceptableDocuments:(id)a2 featureIdentifier:(unsigned long long)a3 localizationBundle:(id)a4 preferredLanguage:(id)a5;
- (id)nextViewController;
- (void)reportAnalyticsEvent:(id)a0 pageTag:(id)a1;
- (void)scanAgain;
- (void)stateChanged;
- (void)terminateSetupFlow;
- (void)tryUploadAgain;
- (void)userApprovedCapturedID;
- (void)userRejectedCapturedID;
- (void)userWantsToCancel;
- (void)userWantsToContinue;

@end
