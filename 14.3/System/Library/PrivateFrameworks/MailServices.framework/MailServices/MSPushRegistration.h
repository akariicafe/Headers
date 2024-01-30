@class NSString, NSArray;

@interface MSPushRegistration : MSMailDefaultService

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *notificationNamePrefix;
@property (copy, nonatomic) NSArray *mailboxNames;

- (id)init;
- (void).cxx_destruct;
- (void)registerForPush:(id /* block */)a0;

@end
