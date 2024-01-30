@class NSString, NSNumber;

@interface TPSAnalyticsEventNotificationPosted : TPSAnalyticsEvent {
    NSNumber *_posted;
    NSNumber *_remaining;
}

@property (readonly, nonatomic) BOOL landingPage;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (readonly, nonatomic) NSNumber *notificationsPosted;
@property (retain, nonatomic) NSString *errorCode;

+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 remainingNotificationsCount:(id)a2 errorCode:(id)a3;
+ (BOOL)supportsSecureCoding;

- (id)eventName;
- (void).cxx_destruct;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 remainingNotificationsCount:(id)a2 errorCode:(id)a3;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)persistKeys;
- (void)encodeWithCoder:(id)a0;

@end
