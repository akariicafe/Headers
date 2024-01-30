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
- (void)loadView;
- (void).cxx_destruct;
- (void)showSpinner:(BOOL)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (id)initWithPassUniqueID:(id)a0;

@end
