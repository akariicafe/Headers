@class CARScreenViewArea, NSString, NSDictionary, CARScreenInfo;

@interface _DBAnalyticsScreenInfo : _DBAnalyticsTimeAccumulator

@property (readonly, nonatomic) CARScreenInfo *screenInfo;
@property (readonly, copy, nonatomic) NSString *analyticsPrefix;
@property (readonly, nonatomic) CARScreenViewArea *sessionStartViewArea;
@property (nonatomic) unsigned long long viewAreaChangeCount;
@property (nonatomic) unsigned long long viewAreaChangeUsingTransitionControlCount;
@property (nonatomic) BOOL hasTransitionControlsWithinViewAreas;
@property (readonly, nonatomic) NSDictionary *analytics_sessionStartedDictionaryRepresentation;
@property (readonly, nonatomic) NSDictionary *analytics_sessionEndedDictionaryRepresentation;
@property (readonly, nonatomic) unsigned long long indexOfLargestViewArea;

- (void).cxx_destruct;
- (id)_identifierForViewArea:(id)a0;
- (id)initWithScreenInfo:(id)a0 analyticsPrefix:(id)a1 sessionStartViewArea:(id)a2;
- (void)startCountingTimeForViewArea:(id)a0;

@end
