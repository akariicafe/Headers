@class NSArray, NSString;
@protocol CKAlertControllerDelegate;

@interface CKAlertController : UIAlertController <CKAdaptivePresentedControllerProtocol>

@property (weak, nonatomic) id<CKAlertControllerDelegate> alertDelegate;
@property (readonly, nonatomic) NSArray *actions;
@property (nonatomic) BOOL wantsWindowedPresentation;
@property (nonatomic) BOOL preserveModalPresentationStyle;
@property (nonatomic) BOOL shouldHidePresentingWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alertControllerWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2;

- (void)addAction:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)allowsRotation;
- (void)presentFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
