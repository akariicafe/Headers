@class NSSet;

@interface ASActivityDataNotificationGroup : NSObject

@property (retain, nonatomic) NSSet *goalCompletionNotifications;
@property (retain, nonatomic) NSSet *achievementNotifications;
@property (retain, nonatomic) NSSet *workoutNotifications;
@property (readonly, nonatomic) NSSet *allNotifications;

- (unsigned long long)notificationCount;
- (void).cxx_destruct;

@end
