@class NSString, NSURL, NSArray;

@interface AAMessagesInviteContext : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSURL *inviteURL;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSString *messageBody;
@property (copy, nonatomic) NSString *secondaryTitle;

- (id)description;
- (void).cxx_destruct;

@end
