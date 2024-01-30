@class NSString, NSURL, NSArray;

@interface FAInviteContext : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSURL *inviteURL;
@property (copy, nonatomic) NSString *overlaidTextColorString;
@property (copy, nonatomic) NSArray *invitees;
@property (nonatomic) BOOL canEditRecipients;
@property (copy, nonatomic) NSString *mailLinkTitle;
@property (copy, nonatomic) NSString *mailLinkSubtitle;
@property (copy, nonatomic) NSString *mailMessageSubject;
@property (copy, nonatomic) NSString *mailMessageBodyHTML;

- (id)initWithResults:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)_parseResultsDictionary:(id)a0;

@end
