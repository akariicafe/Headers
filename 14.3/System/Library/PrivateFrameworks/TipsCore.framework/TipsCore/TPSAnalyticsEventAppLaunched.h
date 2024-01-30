@class NSString, NSNumber;

@interface TPSAnalyticsEventAppLaunched : TPSAnalyticsEvent {
    BOOL _needsSessionReset;
}

@property (readonly, nonatomic) BOOL landingPage;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (readonly, nonatomic) NSNumber *launchNumber;
@property (readonly, nonatomic) NSString *userType;
@property (retain, nonatomic) NSString *launchType;

+ (BOOL)supportsSecureCoding;
+ (void)resetLaunchNumber;
+ (id)_currentSessionEvents;
+ (id)_initialSessionEvent;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 launchType:(id)a2;
+ (id)_latestSessionEvent;
+ (id)firstLaunchEvent;
+ (void)appSessionEndedWithType:(id)a0;
+ (id)lastRecordedLaunchType;

- (id)eventName;
- (void).cxx_destruct;
- (void)log;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (id)userTypeString;
- (id)_initFirstLaunchEvent;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 launchType:(id)a2;
- (void)_updateLaunchCount;
- (void)_aggregateLog;
- (void)persistKeys;
- (void)encodeWithCoder:(id)a0;

@end
