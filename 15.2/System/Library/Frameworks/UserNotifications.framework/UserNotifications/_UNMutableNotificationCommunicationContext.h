@class NSString, NSArray, NSURL, _UNNotificationContact;

@interface _UNMutableNotificationCommunicationContext : _UNNotificationCommunicationContext

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *associatedObjectUri;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) _UNNotificationContact *sender;
@property (copy, nonatomic) NSURL *contentURL;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic, getter=isSystemImage) BOOL systemImage;
@property (nonatomic) BOOL mentionsCurrentUser;
@property (nonatomic) BOOL notifyRecipientAnyway;
@property (nonatomic, getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property (nonatomic) unsigned long long recipientCount;

+ (id)mutableContextFromINIntent:(id)a0;

- (void)setMentionsCurrentUser:(BOOL)a0;
- (void)setSender:(id)a0;
- (void)setNotifyRecipientAnyway:(BOOL)a0;
- (void)setContentURL:(id)a0;
- (void)setAssociatedObjectUri:(id)a0;
- (void)setImageName:(id)a0;
- (void)setSystemImage:(BOOL)a0;
- (void)setBundleIdentifier:(id)a0;
- (void)setRecipientCount:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRecipients:(id)a0;
- (void)setReplyToCurrentUser:(BOOL)a0;
- (void)setDisplayName:(id)a0;
- (void)setIdentifier:(id)a0;

@end
