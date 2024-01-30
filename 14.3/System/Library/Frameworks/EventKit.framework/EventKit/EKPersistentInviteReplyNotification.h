@interface EKPersistentInviteReplyNotification : EKPersistentNotification

+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (Class)meltedClass;

- (void)setCreationDate:(id)a0;
- (id)summary;
- (int)entityType;
- (id)inReplyTo;
- (void)setSummary:(id)a0;
- (id)creationDate;
- (id)shareeFirstName;
- (id)shareeLastName;
- (void)setInReplyTo:(id)a0;
- (void)setShareeDisplayName:(id)a0;
- (void)setShareeFirstName:(id)a0;
- (void)setShareeLastName:(id)a0;
- (void)setShareeURL:(id)a0;
- (void)setShareeStatus:(unsigned long long)a0;
- (BOOL)alerted;
- (void)setInviteReplyCalendar:(id)a0;
- (id)shareeURL;
- (unsigned long long)shareeStatus;
- (id)shareeDisplayName;
- (id)inviteReplyCalendar;

@end
