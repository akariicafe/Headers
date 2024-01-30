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

+ (Class)meltedClass;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (id)attendeeWithEmailAddress:(id)a0 name:(id)a1;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1 address:(id)a2;

- (int)entityType;
- (void)setParticipantType:(long long)a0;
- (id)initWithName:(id)a0 emailAddress:(id)a1 address:(id)a2;
- (id)initWithEmailAddress:(id)a0 name:(id)a1;
- (id)initWithAddress:(id)a0 name:(id)a1;
- (id)description;
- (long long)participantRole;
- (long long)participantType;
- (unsigned int)flags;
- (void)setParticipantRole:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)statusRaw;
- (void)setStatusRaw:(int)a0;
- (int)pendingStatusRaw;
- (void)setPendingStatusRaw:(int)a0;
- (id)lastModifiedParticipationStatus;
- (void)setLastModifiedParticipationStatus:(id)a0;
- (void)setFlags:(unsigned int)a0;

@end
