@class NSString;
@protocol PKPeerPaymentUpdatedTermsViewControllerDelegate;

@interface PKPeerPaymentUpdatedTermsViewController : PKExplanationViewController <PKExplanationViewControllerDelegate> {
    NSString *_uniqueID;
}

@property (weak, nonatomic) id<PKPeerPaymentUpdatedTermsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)loadView;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithPassUniqueID:(id)a0;
- (void)showSpinner:(BOOL)a0;

@end
