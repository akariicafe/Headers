@class NSNumber, NSString;

@interface TPSAnalyticsEventNotificationPosted : TPSAnalyticsEvent {
    NSNumber *_posted;
    NSNumber *_remaining;
}

@property (retain, nonatomic) NSNumber *trialDeploymentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (retain, nonatomic) NSString *trialTreatmentID;
@property (retain, nonatomic) NSString *trialRampID;
@property (readonly, nonatomic) BOOL landingPage;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;
@property (readonly, nonatomic) NSNumber *notificationsPosted;
@property (retain, nonatomic) NSString *errorCode;
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 remainingNotificationsCount:(id)a3 errorCode:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)eventName;
- (id)initWithCoder:(id)a0;
- (id)mutableAnalyticsEventRepresentation;
- (void)setDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 remainingNotificationsCount:(id)a3 errorCode:(id)a4;
- (void)persistKeys;

@end
