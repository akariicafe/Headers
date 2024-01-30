@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)noMeCard;
- (void)willReportAnalytics;
- (void)didReportAnalytics;
- (void)withinReportingInterval:(id)a0;
- (void)noDonatedMeCard;

@end
