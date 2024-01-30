@class NSNumber, NSString;

@interface TPSAnalyticsEventUsageObservations : TPSAnalyticsEvent

@property (retain, nonatomic) NSNumber *trialDeploymentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (retain, nonatomic) NSString *trialTreatmentID;
@property (retain, nonatomic) NSString *trialRampID;
@property (readonly, nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl;
@property (retain, nonatomic) NSString *eventID;
@property (retain, nonatomic) NSNumber *eventCount;
@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *experimentCampID;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithEventID:(id)a0 eventCount:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)eventName;
- (id)initWithCoder:(id)a0;
- (id)mutableAnalyticsEventRepresentation;
- (void)setDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)_initWithEventID:(id)a0 eventCount:(id)a1;

@end
