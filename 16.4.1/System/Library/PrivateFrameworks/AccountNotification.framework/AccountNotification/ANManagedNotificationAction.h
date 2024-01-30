@class NSString, NSNumber, ANManagedAccountNotification;

@interface ANManagedNotificationAction : NSManagedObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) id options;
@property (retain, nonatomic) NSNumber *isInternal;
@property (retain, nonatomic) ANManagedAccountNotification *notificationToActivate;
@property (retain, nonatomic) ANManagedAccountNotification *notificationToDismiss;
@property (retain, nonatomic) ANManagedAccountNotification *notificationToClear;

- (void)takeValuesFromNotificationAction:(id)a0;

@end
