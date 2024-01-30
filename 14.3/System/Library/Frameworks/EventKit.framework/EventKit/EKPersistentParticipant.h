@interface EKPersistentParticipant : EKPersistentObject <EKParticipantSemanticIdentifierGeneratorDelegate>

+ (id)defaultPropertiesToLoad;

- (void)setFirstName:(id)a0;
- (id)displayNameRaw;
- (id)URL;
- (void)setEmailAddress:(id)a0;
- (void)setUUID:(id)a0;
- (id)emailAddress;
- (id)proposedStartDate;
- (id)comment;
- (int)proposedStartDateStatus;
- (id)firstName;
- (id)lastName;
- (id)phoneNumber;
- (void)setComment:(id)a0;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPhoneNumber:(id)a0;
- (id)UUID;
- (void)setProposedStartDateStatus:(int)a0;
- (void)setProposedStartDate:(id)a0;
- (id)invitedBy;
- (id)url;
- (void)setURL:(id)a0;
- (id)semanticIdentifier;
- (void)setDisplayNameRaw:(id)a0;
- (void)setLastName:(id)a0;
- (id)displayName;

@end
