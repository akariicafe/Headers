@class NSString, NSNumber;

@interface TPSAnalyticsEventAppLaunched : TPSAnalyticsEvent {
    BOOL _needsSessionReset;
}

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;
@property (readonly, nonatomic) NSNumber *launchNumber;
@property (readonly, nonatomic) NSString *userType;
@property (retain, nonatomic) NSString *launchType;

+ (BOOL)supportsSecureCoding;
+ (void)resetLaunchNumber;
+ (id)_currentSessionEvents;
+ (id)_initialSessionEvent;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 launchType:(id)a3;
+ (id)_latestSessionEvent;
+ (id)firstLaunchEvent;
+ (void)appSessionEndedWithType:(id)a0;
+ (id)lastRecordedLaunchType;

- (void)encodeWithCoder:(id)a0;
- (void)log;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)persistKeys;
- (id)userTypeString;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 launchType:(id)a3;
- (id)_initFirstLaunchEvent;
- (void)_updateLaunchCount;
- (void)_aggregateLog;

@end
