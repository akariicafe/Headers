@class NSString;

@interface CALNMSMailAccounts : NSObject <CALNMailAccounts>

@property (class, readonly, nonatomic) CALNMSMailAccounts *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canSendMail;

@end
