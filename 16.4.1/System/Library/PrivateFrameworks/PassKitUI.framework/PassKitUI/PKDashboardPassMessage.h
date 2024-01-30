@class UIColor, NSString, CNContact, UIImage, NSDictionary, AMSDialogRequest;

@interface PKDashboardPassMessage : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *secondaryMessage;
@property (copy, nonatomic) id /* block */ actionOnMessagePress;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ actionOnButtonPress;
@property (nonatomic) BOOL isDestructiveAction;
@property (copy, nonatomic) id /* block */ actionOnViewed;
@property (copy, nonatomic) id /* block */ actionOnDismiss;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (retain, nonatomic) CNContact *avatarContact;
@property (nonatomic) BOOL showDisclosure;
@property (nonatomic) BOOL showSpinner;
@property (nonatomic) NSString *analyticsReporterSubject;
@property (copy, nonatomic) NSString *analyticsIdentifier;
@property (nonatomic, getter=canReportToAnalytics) BOOL reportToAnalytics;
@property (copy, nonatomic) NSDictionary *additionalEventAnalyticsOnButtonPress;
@property (retain, nonatomic) AMSDialogRequest *dialogRequest;

+ (id)messageFromDialogRequest:(id)a0 withAction:(id /* block */)a1;

- (void).cxx_destruct;

@end
