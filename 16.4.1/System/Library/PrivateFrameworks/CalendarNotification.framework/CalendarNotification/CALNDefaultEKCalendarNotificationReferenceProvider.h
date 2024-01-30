@class NSString;

@interface CALNDefaultEKCalendarNotificationReferenceProvider : NSObject <CALNEKCalendarNotificationReferenceProvider>

@property (class, readonly, nonatomic) CALNDefaultEKCalendarNotificationReferenceProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationReferenceForObjectID:(id)a0 withType:(int)a1 date:(id)a2 inEventStore:(id)a3;
- (id)notificationReferenceForObjectID:(id)a0 withType:(int)a1 inEventStore:(id)a2;

@end
