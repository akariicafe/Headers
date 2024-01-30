@class PKPaymentHeroImageController, NSString, UIImageView, PKPaymentPass, UIView, PKEducationPhone;

@interface PKEducationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKFieldDetectSuppressor> {
    PKPaymentHeroImageController *_heroImageController;
    UIImageView *_heroPadImageView;
    UIView *_heroPadBackground;
    PKPaymentPass *_paymentPass;
    unsigned long long _educationContext;
    PKEducationPhone *_educationBodyView;
    BOOL _isFaceIDDevice;
    BOOL _invalidated;
    BOOL _wasNavigationBarHidden;
}

@property (copy, nonatomic) id /* block */ continueHandler;
@property (nonatomic) BOOL offerAddToWatch;
@property (copy, nonatomic) NSString *titleOverride;
@property (copy, nonatomic) NSString *bodyAddition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL suppressFieldDetect;

+ (id)assetBackgroundColor;
+ (id)assetBackgroundColorPad;
+ (BOOL)shouldPresentForPass:(id)a0 inEducationContext:(unsigned long long)a1;

- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)invalidate;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)performContinue;
- (id)_heroPadImage;
- (void)_performAddToWatchFlow;
- (void)_showAddToWatchOfferForPass:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithPaymentPass:(id)a0 setupContext:(long long)a1 educationContext:(unsigned long long)a2;

@end
