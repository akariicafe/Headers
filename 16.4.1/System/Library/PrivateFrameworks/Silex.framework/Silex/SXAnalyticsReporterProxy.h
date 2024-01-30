@class NSString;
@protocol SXAnalyticsReporting;

@interface SXAnalyticsReporterProxy : NSObject <SXAnalyticsReporting>

@property (readonly, weak, nonatomic) id<SXAnalyticsReporting> analyticsReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithAnalyticsReporter:(id)a0;

@end
