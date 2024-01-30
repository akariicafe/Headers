@class NSArray;

@interface SSVFamilyContentDeletionEvent : NSObject

@property (readonly, nonatomic) NSArray *deletedAccounts;

+ (void)postDistributedNotificationWithAccountPairs:(id)a0;
+ (id)notificationPayloadWithAccountPairs:(id)a0;

- (void).cxx_destruct;
- (id)initWithNotificationUserInfo:(id)a0;
- (id)initWithXPCEventStreamEvent:(id)a0;

@end
