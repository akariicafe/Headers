@class NSNumber, NSString;

@interface TPSAnalyticsEventDesiredOutcomePerformed : TPSAnalyticsEvent

@property (retain, nonatomic) NSNumber *trialDeploymentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (retain, nonatomic) NSString *trialTreatmentID;
@property (retain, nonatomic) NSString *trialRampID;
@property (retain, nonatomic) NSString *tipID;
@property (nonatomic) double timeToDesiredOutcome;
@property (nonatomic) long long displayCount;
@property (retain, nonatomic) NSString *correlationID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *experimentCampID;
@property (retain, nonatomic) NSString *displayType;
@property (readonly, nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 correlationID:(id)a1 displayType:(id)a2 overrideHoldout:(BOOL)a3 lastDisplayedContext:(id)a4 lastHintDisplayedDate:(id)a5 desiredOutcomePerformedDate:(id)a6;

- (void)encodeWithCoder:(id)a0;
- (id)eventName;
- (id)initWithCoder:(id)a0;
- (id)mutableAnalyticsEventRepresentation;
- (void)setDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)_initWithTipID:(id)a0 correlationID:(id)a1 displayType:(id)a2 overrideHoldout:(BOOL)a3 context:(id)a4 lastHintDisplayedDate:(id)a5 desiredOutcomePerformedDate:(id)a6;

@end
