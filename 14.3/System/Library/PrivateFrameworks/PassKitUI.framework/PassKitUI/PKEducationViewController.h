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

+ (BOOL)shouldPresentForPass:(id)a0 inEducationContext:(unsigned long long)a1;
+ (id)assetBackgroundColor;
+ (id)assetBackgroundColorPad;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithPaymentPass:(id)a0 setupContext:(long long)a1 educationContext:(unsigned long long)a2;
- (id)_heroPadImage;
- (void)_performAddToWatchFlow;
- (void)performContinue;
- (void)_showAddToWatchOfferForPass:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)invalidate;
- (void)viewWillLayoutSubviews;

@end
