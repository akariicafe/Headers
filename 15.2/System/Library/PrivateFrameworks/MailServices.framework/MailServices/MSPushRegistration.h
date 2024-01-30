@class NSString, NSArray;

@interface MSPushRegistration : MSMailDefaultService

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *notificationNamePrefix;
@property (copy, nonatomic) NSArray *mailboxNames;

- (void).cxx_destruct;
- (id)init;
- (void)registerForPush:(id /* block */)a0;

@end
