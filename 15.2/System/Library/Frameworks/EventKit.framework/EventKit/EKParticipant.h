@class NSString, NSURL, NSPredicate, EKCalendarItem;

@interface EKParticipant : EKObject <EKParticipantSemanticIdentifierGeneratorDelegate, EKIdentityProtocol, NSCopying>

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *inviterNameString;
@property (nonatomic) int proposedStartDateStatus;
@property (readonly, nonatomic) BOOL needsResponse;
@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *comment;
@property (readonly, nonatomic) EKCalendarItem *owner;
@property (readonly, nonatomic) int scheduleStatus;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long participantStatus;
@property (readonly, nonatomic) long long participantRole;
@property (readonly, nonatomic) long long participantType;
@property (readonly, nonatomic, getter=isCurrentUser) BOOL currentUser;
@property (readonly, nonatomic) NSPredicate *contactPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)knownIdentityKeysForComparison;
+ (BOOL)needsResponseForParticipantStatus:(long long)a0;
+ (BOOL)canonicalizedEqualityTestValue1:(id)a0 value2:(id)a1 key:(id)a2 object1:(id)a3 object2:(id)a4;
+ (id)participantWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 url:(id)a3;
+ (BOOL)doesParticipantURLString:(id)a0 email:(id)a1 andPhoneNumber:(id)a2 matchParticipantURLString:(id)a3 email:(id)a4 andPhoneNumber:(id)a5;
+ (id)participantWithName:(id)a0 url:(id)a1;
+ (id)knownSingleValueKeysForComparison;

- (id)displayName;
- (id)nameComponents;
- (id)contactPredicate;
- (id)url;
- (id)proposedStartDate;
- (id)URLString;
- (void)setURLString:(id)a0;
- (void)setProposedStartDate:(id)a0;
- (void)setURL:(id)a0;
- (id)invitedBy;
- (void).cxx_destruct;
- (BOOL)isEqualToParticipant:(id)a0;
- (id)proposedStartDateForEvent:(id)a0;
- (void)setDisplayNameRaw:(id)a0;
- (id)initWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 url:(id)a3;
- (id)displayNameRaw;
- (id)nameUsingAddressAsBackup;
- (const void *)ABRecordWithAddressBook:(void *)a0;
- (void)setProposedStartDate:(id)a0 forEvent:(id)a1;
- (BOOL)hasProposedStartDate;
- (id)inviterNameString;
- (id)setInviterNameString;
- (BOOL)isLocationRoom;
- (id)existingContact;
- (void)setDisplayName:(id)a0;
- (void)setUUID:(id)a0;
- (id)semanticIdentifier;

@end
