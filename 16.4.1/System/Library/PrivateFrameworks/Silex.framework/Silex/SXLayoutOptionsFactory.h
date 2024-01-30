@class SXDocumentProvider, SXColumnCalculator, NSString;

@interface SXLayoutOptionsFactory : NSObject <SXLayoutOptionsFactory>

@property (readonly, nonatomic) SXColumnCalculator *columnCalculator;
@property (readonly, nonatomic) SXDocumentProvider *documentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createLayoutOptionsWithViewportSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 traitCollection:(id)a2 bundleSubscriptionStatus:(long long)a3 channelSubscriptionStatus:(long long)a4 contentSizeCategory:(id)a5 testing:(BOOL)a6 viewingLocation:(unsigned long long)a7 contentScaleFactor:(double)a8 newsletterSubscriptionStatus:(unsigned long long)a9 offerUpsellScenario:(long long)a10 subscriptionActivationEligibility:(long long)a11 smartInvertColorsEnabled:(BOOL)a12;
- (id)initWithColumnCalculator:(id)a0 documentProvider:(id)a1;

@end
