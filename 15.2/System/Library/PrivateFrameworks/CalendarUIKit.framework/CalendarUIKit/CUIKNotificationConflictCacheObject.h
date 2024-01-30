@class EKConflictDetails;

@interface CUIKNotificationConflictCacheObject : NSObject

@property unsigned long long state;
@property (retain) EKConflictDetails *conflictInfo;

+ (id)keyForNotification:(id)a0;

- (void).cxx_destruct;

@end
