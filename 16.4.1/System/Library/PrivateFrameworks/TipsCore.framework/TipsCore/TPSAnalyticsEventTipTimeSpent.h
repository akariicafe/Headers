@class NSNumber, NSString;

@interface TPSAnalyticsEventTipTimeSpent : TPSAnalyticsEvent

@property (retain, nonatomic) NSNumber *trialDeploymentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (retain, nonatomic) NSString *trialTreatmentID;
@property (retain, nonatomic) NSString *trialRampID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *tipID;
@property (retain, nonatomic) NSString *correlationID;
@property (nonatomic) double timeSpent;
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 collectionID:(id)a1 correlationID:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)eventName;
- (id)initWithCoder:(id)a0;
- (id)mutableAnalyticsEventRepresentation;
- (void)setDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)_initWithTipID:(id)a0 collectionID:(id)a1 correlationID:(id)a2;

@end
