@class NSArray;

@interface RTWiFiManagerNotificationLinkStatusChanged : RTNotification

@property (readonly, nonatomic) unsigned long long linkStatus;
@property (readonly, nonatomic) NSArray *accessPoints;

- (void).cxx_destruct;
- (id)initWithLinkStatus:(unsigned long long)a0 accessPoints:(id)a1;

@end
