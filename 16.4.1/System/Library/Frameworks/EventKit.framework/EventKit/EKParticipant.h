@class NSString, NSURL, NSPredicate, EKCalendarItem;

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying>

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *inviterNameString;
@property (readonly, nonatomic) BOOL needsResponse;
@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) BOOL scheduleForceSend;
@property (readonly, nonatomic) EKCalendarItem *owner;
@property (readonly, nonatomic) int scheduleStatus;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long participantStatus;
@property (readonly, nonatomic) long long participantRole;
@property (readonly, nonatomic) long long participantType;
@property (readonly, nonatomic, getter=isCurrentUser) BOOL currentUser;
@property (readonly, nonatomic) NSPredicate *contactPredicate;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing;
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)knownSingleValueKeysForComparison;
+ (id)knownIdentityKeysForComparison;
+ (BOOL)canonicalizedEqualityTestValue1:(id)a0 value2:(id)a1 key:(id)a2 object1:(id)a3 object2:(id)a4;
+ (BOOL)doesParticipantURLString:(id)a0 email:(id)a1 andPhoneNumber:(id)a2 matchParticipantURLString:(id)a3 email:(id)a4 andPhoneNumber:(id)a5;
+ (BOOL)needsResponseForParticipantStatus:(long long)a0;
+ (id)participantWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 url:(id)a3;
+ (id)participantWithName:(id)a0 url:(id)a1;

- (id)displayString;
- (id)nameComponents;
- (id)URLString;
- (id)displayName;
- (void)setURL:(id)a0;
- (id)url;
- (void)setUUID:(id)a0;
- (void)setDisplayName:(id)a0;
- (void).cxx_destruct;
- (id)existingContact;
- (void)setURLString:(id)a0;
- (id)contactPredicate;
- (BOOL)isEqualToParticipant:(id)a0;
- (const void *)ABRecordWithAddressBook:(void *)a0;
- (id)displayNameRaw;
- (id)generateSemanticIdentifier;
- (id)initWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 url:(id)a3;
- (id)inviterNameString;
- (BOOL)isLocationRoom;
- (id)nameUsingAddressAsBackup;
- (id)newContact;
- (void)setDisplayNameRaw:(id)a0;
- (void)setInviterNameString:(id)a0;

@end
