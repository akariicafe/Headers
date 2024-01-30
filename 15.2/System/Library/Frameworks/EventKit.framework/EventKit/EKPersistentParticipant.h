@interface EKPersistentParticipant : EKPersistentObject <EKParticipantSemanticIdentifierGeneratorDelegate>

+ (id)defaultPropertiesToLoad;

- (void)setFirstName:(id)a0;
- (void)setPhoneNumber:(id)a0;
- (void)setLastName:(id)a0;
- (id)displayName;
- (id)phoneNumber;
- (id)emailAddress;
- (id)url;
- (id)proposedStartDate;
- (id)comment;
- (id)URLString;
- (id)UUID;
- (void)setURLString:(id)a0;
- (void)setProposedStartDate:(id)a0;
- (void)setEmailAddress:(id)a0;
- (void)setComment:(id)a0;
- (id)invitedBy;
- (void)setScheduleStatus:(int)a0;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)lastName;
- (void)setDisplayNameRaw:(id)a0;
- (id)displayNameRaw;
- (void)setProposedStartDateStatus:(int)a0;
- (int)scheduleStatus;
- (int)proposedStartDateStatus;
- (id)firstName;
- (void)setUUID:(id)a0;
- (id)semanticIdentifier;

@end
