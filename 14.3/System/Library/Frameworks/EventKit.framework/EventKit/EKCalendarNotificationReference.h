@class EKCalendarNotification, EKEventStore, NSDate, EKObjectID;

@interface EKCalendarNotificationReference : NSObject {
    NSDate *_date;
    EKEventStore *_eventStore;
    EKCalendarNotification *_notification;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) EKCalendarNotification *notification;
@property (readonly, nonatomic) EKObjectID *objectID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(int)a0 objectID:(id)a1 eventStore:(id)a2;
- (long long)_notificationTypeForResourceChange:(id)a0 notificationType:(int)a1;
- (id)initWithType:(int)a0 objectID:(id)a1 date:(id)a2 eventStore:(id)a3;

@end
