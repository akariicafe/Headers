@interface EKPersistentParticipant : EKPersistentObject

+ (id)propertyKeyForUniqueIdentifier;
+ (id)defaultPropertiesToLoad;

- (id)emailAddress;
- (void)setEmailAddress:(id)a0;
- (void)setFirstName:(id)a0;
- (id)owner;
- (id)URLString;
- (id)displayName;
- (id)proposedStartDate;
- (id)lastName;
- (id)url;
- (id)phoneNumber;
- (id)UUID;
- (void)setLastName:(id)a0;
- (void)setPhoneNumber:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)firstName;
- (void)setUUID:(id)a0;
- (void)setProposedStartDate:(id)a0;
- (id)comment;
- (void)setComment:(id)a0;
- (void)setURLString:(id)a0;
- (id)displayNameRaw;
- (id)inviterNameString;
- (int)proposedStartDateStatus;
- (BOOL)scheduleForceSend;
- (int)scheduleStatus;
- (void)setDisplayNameRaw:(id)a0;
- (void)setInviterNameString:(id)a0;
- (void)setProposedStartDateStatus:(int)a0;
- (void)setScheduleForceSend:(BOOL)a0;
- (void)setScheduleStatus:(int)a0;

@end
