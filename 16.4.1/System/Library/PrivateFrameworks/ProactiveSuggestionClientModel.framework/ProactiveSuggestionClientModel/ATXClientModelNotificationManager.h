@class NSString;

@interface ATXClientModelNotificationManager : NSObject <ATXClientModelNotificationManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationHandleForClientModel:(id)a0;
- (void)updateNotificationId:(id)a0 clientModel:(id)a1;

@end
