@class SXLayoutOptions, NSString;

@interface SXConditionValidationContext : NSObject <SXConditionValidationContext>

@property (readonly, nonatomic) SXLayoutOptions *layoutOptions;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } viewportSize;
@property (readonly, nonatomic) long long horizontalSizeClass;
@property (readonly, nonatomic) long long verticalSizeClass;
@property (readonly, nonatomic) NSString *contentSizeCategory;
@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (readonly, nonatomic) BOOL testing;
@property (readonly, nonatomic) unsigned long long viewingLocation;
@property (readonly, nonatomic, getter=isBundleSubscriber) BOOL bundleSubscriber;
@property (readonly, nonatomic, getter=isBundleTrialEligible) BOOL bundleTrialEligible;
@property (readonly, nonatomic, getter=isChannelSubscriber) BOOL channelSubscriber;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) double contentScaleFactor;
@property (readonly, nonatomic) unsigned long long newsletterSubscriptionStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLayoutOptions:(id)a0;

@end
