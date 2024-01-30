@class NSString, NSTimeZone, NSDate;

@interface _ATXNotificationDuetEvent : NSObject <ATXTimedEventProtocol>

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *notificationId;
@property (readonly, nonatomic) NSDate *eventTime;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) long long eventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isReceiveEvent;
- (id)initWithBundleId:(id)a0 notificationId:(id)a1 eventTime:(id)a2 timeZone:(id)a3 eventType:(id)a4;
- (BOOL)isAcceptEvent;
- (BOOL)isRejectEvent;
- (id)prettyRepresentation;

@end
