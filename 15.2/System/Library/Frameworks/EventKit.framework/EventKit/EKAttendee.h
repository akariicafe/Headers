@class NSDate;

@interface EKAttendee : EKParticipant

@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantType;
@property (readonly, nonatomic) NSDate *lastModifiedParticipationStatus;
@property (readonly, nonatomic) BOOL rsvpRequested;
@property (nonatomic) long long pendingStatus;
@property (nonatomic) BOOL commentChanged;
@property (nonatomic) BOOL statusChanged;
@property (nonatomic) BOOL proposedStartDateChanged;

+ (long long)_ekParticipantStatusFromCalAttendeeStatus:(int)a0;
+ (Class)frozenClass;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1;
+ (int)_calAttendeeStatusFromEKParticipantStatus:(long long)a0;
+ (id)attendeeWithName:(id)a0 url:(id)a1;
+ (id)attendeeWithEmailAddress:(id)a0 name:(id)a1;
+ (id)knownSingleValueKeysForComparison;
+ (id)attendeeWithName:(id)a0 phoneNumber:(id)a1;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 url:(id)a3;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1 address:(id)a2;

- (void)markAsForward;
- (BOOL)_valueForFlag:(unsigned int)a0;
- (void)_setFlag:(unsigned int)a0 value:(BOOL)a1;
- (id)displayString;
- (id)description;
- (unsigned int)flags;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isParticipantStatusDirty;
- (int)statusRaw;
- (void)setStatusRaw:(int)a0;
- (int)pendingStatusRaw;
- (void)setPendingStatusRaw:(int)a0;
- (BOOL)isCurrentUser;
- (void)setFlags:(unsigned int)a0;

@end
