@class ATXUserNotificationResolution, NSUUID, NSString, NSDate;

@interface ATXNotificationTelemetryQueryResult : NSObject

@property (retain, nonatomic) NSUUID *notificationUUID;
@property (retain, nonatomic) NSDate *receiveTimestamp;
@property (nonatomic) long long deliveryMethod;
@property (nonatomic) long long urgency;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL isMessage;
@property (retain, nonatomic) NSString *destinationReason;
@property (retain, nonatomic) NSString *originalDestination;
@property (retain, nonatomic) NSString *finalDestination;
@property (retain, nonatomic) NSString *receiveModeIdentifier;
@property (retain, nonatomic) ATXUserNotificationResolution *resolution;

- (void).cxx_destruct;

@end
