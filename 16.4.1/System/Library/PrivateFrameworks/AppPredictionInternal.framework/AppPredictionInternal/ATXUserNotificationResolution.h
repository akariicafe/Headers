@class NSUUID, NSDate;

@interface ATXUserNotificationResolution : NSObject

@property (readonly, nonatomic) NSUUID *notificationUUID;
@property (readonly, nonatomic) unsigned long long numExpansions;
@property (readonly, nonatomic) long long resolutionType;
@property (readonly, nonatomic) NSDate *resolutionTimestamp;

- (void).cxx_destruct;
- (id)initWithNotificationUUID:(id)a0 numExpansions:(unsigned long long)a1 resolutionType:(long long)a2 resolutionTimestamp:(id)a3;

@end
