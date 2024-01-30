@class NSString;
@protocol HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider;

@interface HKMobilityWalkingSteadinessAnalyticsDailyEvent : NSObject <HKAnalyticsEvent>

@property (retain, nonatomic) id<HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider> dataSource;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
