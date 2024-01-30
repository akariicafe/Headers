@class NSString, NSDictionary, NSNumber;

@interface HKMCProjectionAccuracyMetric : NSObject

@property (class, readonly, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSDictionary *eventPayload;
@property (nonatomic) BOOL overlapMostLikelyDays;
@property (nonatomic) BOOL overlapProjectedDays;
@property (nonatomic) BOOL overlapNone;
@property (nonatomic) BOOL sensorBasedPrediction;
@property (nonatomic) long long totalDayRange;
@property (nonatomic) BOOL partiallyLogged;
@property (nonatomic) BOOL periodPredictionEnabled;
@property (nonatomic) BOOL sensorBasedPredictionEnabled;
@property (nonatomic) BOOL isLoggingMultipleDays;
@property (nonatomic) long long daysAgoLogged;
@property (retain, nonatomic) NSNumber *isOngoingPeriod;
@property (retain, nonatomic) NSString *activePairedWatchProductType;
@property (retain, nonatomic) NSNumber *daysFromMostLikelyStart;
@property (retain, nonatomic) NSNumber *daysFromMostLikelyEnd;
@property (retain, nonatomic) NSNumber *daysFromProjectedStart;
@property (retain, nonatomic) NSNumber *daysFromProjectedEnd;

- (id)description;
- (void).cxx_destruct;
- (id)initWithOverlapMostLikelyDays:(BOOL)a0 overlapProjectedDays:(BOOL)a1 overlapNone:(BOOL)a2 sensorBasedPrediction:(BOOL)a3 totalDayRange:(long long)a4 partiallyLogged:(BOOL)a5 periodPredictionEnabled:(BOOL)a6 sensorBasedPredictionEnabled:(BOOL)a7 isLoggingMultipleDays:(BOOL)a8 daysAgoLogged:(long long)a9 isOngoingPeriod:(id)a10 activePairedWatchProductType:(id)a11 daysFromMostLikelyStart:(id)a12 daysFromMostLikelyEnd:(id)a13 daysFromProjectedStart:(id)a14 daysFromProjectedEnd:(id)a15;

@end
