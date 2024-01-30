@protocol CALNMailAccounts;

@interface CALNTriggeredEventNotificationMailtoURLProvider : NSObject

@property (readonly, nonatomic) id<CALNMailAccounts> mailAccounts;

- (void).cxx_destruct;
- (id)initWithMailAccounts:(id)a0;
- (id)mailtoURLForEvent:(id)a0;

@end
