@class AWDServerConnection, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface AnalyticsAgent : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) AWDServerConnection *symptomsAWDConnection;
@property (retain, nonatomic) NSSet *awdSymptomsConfiguredMetricIds;

+ (id)sharedInstance;
+ (id)_awdSymptomsDiagnosticIncidentReportMetricForDiagnosticCase:(id)a0;
+ (void)updateAWDReport:(id)a0 withEvents:(id)a1;
+ (id)_awdSymptomsDiagnosticNotificationTokenMetricForTokenString:(id)a0;
+ (id)_awdSignificantOperationalEventMetricForSignificantEvent:(int)a0 orEventName:(id)a1 errorContext:(int)a2 error:(id)a3 status:(int)a4;
+ (int)awdDampeningType:(short)a0;
+ (int)awdHandledResult:(short)a0;

- (id)initWithSymptomsAWDConnection:(id)a0 queue:(id)a1;
- (void)apnsPostTokenConversionError;
- (void)_registerAWDQueriableMetric:(unsigned int)a0;
- (void)postMetricForSignificantEventWithName:(id)a0 errorContext:(int)a1 error:(id)a2 status:(int)a3;
- (void)_handleQuery:(unsigned int)a0;
- (void)apnsPostTokenEmpty;
- (void)apnsPostAPNSNotEnabled;
- (void)postMetricForSignificantEvent:(int)a0 errorContext:(int)a1 error:(id)a2 status:(int)a3;
- (void)apnsPostTokenNotSet;
- (void)_postMetric:(id)a0 metricIdentifier:(unsigned int)a1;
- (void)postDiagnosticIncidentReportForCase:(id)a0;
- (void)postMetric:(id)a0 metricIdentifier:(unsigned int)a1;
- (void)apnsPostNotificationToken:(id)a0;
- (void).cxx_destruct;

@end
