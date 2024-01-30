@class NSArray, NSDate;

@interface ATXPeriodicLogger : NSObject {
    NSArray *_sources;
    NSDate *_lastSent;
    double _uploadInterval;
    BOOL _enrolled;
    NSDate *_lastEnrolled;
    double _enrollmentRate;
    double _enrollmentPeriod;
}

+ (double)getEnrollmentRate;
+ (BOOL)readEnrollmentFromDefaults;
+ (id)readLastSentFromDefaults;
+ (id)readDateFromDefaultsForKey:(id)a0;
+ (id)readLastEnrolledFromDefaults;

- (void)submit:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setDate:(id)a0 forKey:(id)a1;
- (void)sendMetricsIfNeeded;
- (id)initWithSources:(id)a0 uploadInterval:(double)a1 enrollmentPeriod:(double)a2 enrollmentRate:(double)a3;
- (void)setEnabledOnSourcesTo:(BOOL)a0;
- (id)sendMetricsIfNeededAtThisTime:(id)a0;
- (BOOL)getEnrollment;
- (id)sendMetricsAtThisTime:(id)a0;
- (BOOL)hasEnrollmentExpired:(id)a0;
- (BOOL)determineEnrollment;
- (void)setLastSentToTime:(id)a0;
- (id)compileAndSendMetrics:(id)a0;
- (void)setEnrollment:(BOOL)a0;
- (void)setLastEnrolledToTime:(id)a0;
- (void)clearUserId;
- (BOOL)isItTimeYet:(id)a0;
- (id)compileLog;
- (id)getLastSent;
- (id)getLastEnrolled;
- (id)convertDictionaryToDataUnits:(id)a0;
- (id)getUserId;
- (id)generateUserId;
- (void)overrideEnrollmentRate:(double)a0;

@end
