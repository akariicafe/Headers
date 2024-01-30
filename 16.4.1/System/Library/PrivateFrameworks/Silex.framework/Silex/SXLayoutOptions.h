@class UITraitCollection, NSString, SXColumnLayout;

@interface SXLayoutOptions : NSObject

@property (readonly, nonatomic) SXColumnLayout *columnLayout;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) NSString *contentSizeCategory;
@property (readonly, nonatomic) long long bundleSubscriptionStatus;
@property (readonly, nonatomic) long long channelSubscriptionStatus;
@property (readonly, nonatomic) long long offerUpsellScenario;
@property (readonly, nonatomic) long long subscriptionActivationEligibility;
@property (readonly, nonatomic) BOOL testing;
@property (readonly, nonatomic) unsigned long long viewingLocation;
@property (readonly, nonatomic) double contentScaleFactor;
@property (readonly, nonatomic) unsigned long long newsletterSubscriptionStatus;
@property (readonly, nonatomic) BOOL smartInvertColorsEnabled;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)diffWithLayoutOptions:(id)a0;
- (id)initWithColumnLayout:(id)a0 viewportSize:(struct CGSize { double x0; double x1; })a1 traitCollection:(id)a2 contentSizeCategory:(id)a3 bundleSubscriptionStatus:(long long)a4 channelSubscriptionStatus:(long long)a5 testing:(BOOL)a6 viewingLocation:(unsigned long long)a7 contentScaleFactor:(double)a8 newsletterSubscriptionStatus:(unsigned long long)a9 offerUpsellScenario:(long long)a10 subscriptionActivationEligibility:(long long)a11 smartInvertColorsEnabled:(BOOL)a12;

@end
