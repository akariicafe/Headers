@class NSString, NSNumber;

@interface TPSAnalyticsEventNotificationPosted : TPSAnalyticsEvent {
    NSNumber *_posted;
    NSNumber *_remaining;
}

@property (readonly, nonatomic) BOOL landingPage;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;
@property (readonly, nonatomic) NSNumber *notificationsPosted;
@property (retain, nonatomic) NSString *errorCode;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 remainingNotificationsCount:(id)a3 errorCode:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 remainingNotificationsCount:(id)a3 errorCode:(id)a4;
- (void)persistKeys;

@end
