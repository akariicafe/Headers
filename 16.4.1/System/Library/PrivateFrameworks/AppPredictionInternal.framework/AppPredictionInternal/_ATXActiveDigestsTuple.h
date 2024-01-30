@class ATXUserNotificationDigest;

@interface _ATXActiveDigestsTuple : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXUserNotificationDigest *activeUpcomingDigest;
@property (readonly, nonatomic) ATXUserNotificationDigest *activeScheduledDigest;
@property (readonly, nonatomic) ATXUserNotificationDigest *justCompletedDigest;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActiveUpcomingDigest:(id)a0 activeScheduledDigest:(id)a1 justCompletedDigest:(id)a2;
- (id)init;
- (id)initWithPreviousTuple:(id)a0 nextDigestEvent:(id)a1;
- (void).cxx_destruct;

@end
