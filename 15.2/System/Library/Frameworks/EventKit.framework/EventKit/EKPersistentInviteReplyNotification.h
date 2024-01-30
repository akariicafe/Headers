@interface EKPersistentInviteReplyNotification : EKPersistentNotification

+ (Class)meltedClass;
+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (int)entityType;
- (id)summary;
- (void)setCreationDate:(id)a0;
- (id)creationDate;
- (BOOL)alerted;
- (unsigned long long)shareeStatus;
- (id)shareeDisplayName;
- (id)inviteReplyCalendar;
- (id)inReplyTo;
- (void)setInviteReplyCalendar:(id)a0;
- (void)setInReplyTo:(id)a0;
- (void)setSummary:(id)a0;
- (id)shareeFirstName;
- (id)shareeURLString;
- (id)shareeLastName;
- (void)setShareeURLString:(id)a0;
- (void)setShareeDisplayName:(id)a0;
- (void)setShareeFirstName:(id)a0;
- (void)setShareeLastName:(id)a0;
- (void)setShareeStatus:(unsigned long long)a0;

@end
