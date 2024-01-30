@class NSDate;

@interface EKAttendee : EKParticipant

@property (readonly, nonatomic) int statusRaw;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantType;
@property (readonly, nonatomic) NSDate *lastModifiedParticipationStatus;
@property (readonly, nonatomic) BOOL rsvpRequested;
@property (nonatomic) long long pendingStatus;
@property (nonatomic) BOOL commentChanged;
@property (nonatomic) BOOL statusChanged;
@property (nonatomic) BOOL proposedStartDateChanged;
@property (nonatomic) int proposedStartDateStatus;

+ (id)knownSingleValueKeysForComparison;
+ (Class)frozenClass;
+ (int)_calAttendeeStatusFromEKParticipantStatus:(long long)a0;
+ (long long)_ekParticipantStatusFromCalAttendeeStatus:(int)a0;
+ (id)attendeeWithEmailAddress:(id)a0 name:(id)a1;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1 address:(id)a2;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 url:(id)a3;
+ (id)attendeeWithName:(id)a0 phoneNumber:(id)a1;
+ (id)attendeeWithName:(id)a0 url:(id)a1;

- (id)owner;
- (void)setFlags:(unsigned int)a0;
- (id)proposedStartDate;
- (unsigned int)flags;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)setProposedStartDate:(id)a0;
- (BOOL)isCurrentUser;
- (void)_setFlag:(unsigned int)a0 value:(BOOL)a1;
- (BOOL)_isParticipantStatusDirty;
- (BOOL)_valueForFlag:(unsigned int)a0;
- (BOOL)hasProposedStartDate;
- (void)markAsForward;
- (int)pendingStatusRaw;
- (id)proposedStartDateForEvent:(id)a0;
- (void)setPendingStatusRaw:(int)a0;
- (void)setProposedStartDate:(id)a0 forEvent:(id)a1;
- (void)setStatusRaw:(int)a0;

@end
