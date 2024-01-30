@class NSDate;

@interface EKPersistentAttendee : EKPersistentParticipant

@property (nonatomic) int statusRaw;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantType;
@property (nonatomic) int pendingStatus;
@property (copy, nonatomic) NSDate *lastModified;
@property (nonatomic) BOOL commentChanged;
@property (nonatomic) BOOL statusChanged;
@property (nonatomic) BOOL proposedStartDateChanged;

+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1 address:(id)a2;
+ (Class)meltedClass;
+ (id)attendeeWithEmailAddress:(id)a0 name:(id)a1;

- (int)statusRaw;
- (void)setLastModifiedParticipationStatus:(id)a0;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPendingStatusRaw:(int)a0;
- (id)lastModifiedParticipationStatus;
- (int)pendingStatusRaw;
- (void)setParticipantType:(long long)a0;
- (id)description;
- (unsigned int)flags;
- (id)initWithName:(id)a0 emailAddress:(id)a1 address:(id)a2;
- (void)setStatusRaw:(int)a0;
- (void)setParticipantRole:(long long)a0;
- (id)initWithAddress:(id)a0 name:(id)a1;
- (id)initWithEmailAddress:(id)a0 name:(id)a1;
- (long long)participantRole;
- (long long)participantType;
- (void)setFlags:(unsigned int)a0;

@end
