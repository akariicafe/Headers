@class NSString, AMSUIToastTransitioningDelegate, AMSBinaryPromise, AMSUIToastAppearance;

@interface AMSUIToastViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>

@property (retain, nonatomic) AMSUIToastAppearance *requestAppearance;
@property (retain, nonatomic) AMSUIToastTransitioningDelegate *transitionDelegate;
@property (retain, nonatomic) AMSUIToastAppearance *preferredAppearance;
@property (nonatomic) unsigned long long impressionsReportingFrequency;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
