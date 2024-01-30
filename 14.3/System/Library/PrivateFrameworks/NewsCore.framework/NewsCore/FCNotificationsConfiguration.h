@class NSArray;

@interface FCNotificationsConfiguration : NSObject

@property (readonly, copy, nonatomic) NSArray *preSubscribedNotificationsChannelIDs;
@property (readonly, copy, nonatomic) NSArray *recommendedNotificationChannelIDs;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPresubscribedChannelIDs:(id)a0 recommendedNotificationChannelIDs:(id)a1;

@end
