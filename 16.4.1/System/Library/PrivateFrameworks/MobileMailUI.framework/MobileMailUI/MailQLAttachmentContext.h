@class EMMailboxObjectID, NSUserActivity, NSURL, EMMessageObjectID, NSString;

@interface MailQLAttachmentContext : NSObject

@property (readonly, copy, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) NSURL *attachmentURL;
@property (readonly, nonatomic, getter=isContentManaged) BOOL contentManaged;
@property (readonly, nonatomic) long long editBehavior;
@property (readonly, nonatomic) EMMessageObjectID *messageObjectID;
@property (readonly, nonatomic) EMMailboxObjectID *mailboxObjectID;
@property (readonly, nonatomic) NSString *subject;

+ (id)contextWithUserActivity:(id)a0;

- (void).cxx_destruct;
- (id)initWithAttachmentURL:(id)a0 editBehavior:(long long)a1 messageObjectID:(id)a2 mailboxObjectID:(id)a3 subject:(id)a4 contentManaged:(BOOL)a5;

@end
