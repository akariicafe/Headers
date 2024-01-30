@class NSString, UIImage, NSDictionary;

@interface PKDashboardPassMessage : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ actionOnMessagePress;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ actionOnButtonPress;
@property (nonatomic) BOOL isDestructiveAction;
@property (copy, nonatomic) id /* block */ actionOnDismiss;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL showDisclosure;
@property (nonatomic) BOOL showSpinner;
@property (nonatomic) NSString *analyticsReporterSubject;
@property (nonatomic, getter=canReportToAnalytics) BOOL reportToAnalytics;
@property (copy, nonatomic) NSDictionary *additionalEventAnalyticsOnButtonPress;

- (void).cxx_destruct;

@end
