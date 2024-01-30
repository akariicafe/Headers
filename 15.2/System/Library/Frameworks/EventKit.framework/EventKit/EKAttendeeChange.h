@class EKObjectID, NSString;

@interface EKAttendeeChange : EKParticipantChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;
@property (readonly, nonatomic) BOOL attendeeRole;
@property (readonly, nonatomic) BOOL attendeeStatus;
@property (readonly, nonatomic) NSString *attendeeEmailAddress;

+ (int)entityType;
+ (void)fetchAttendeeChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchAttendeeChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchAttendeeChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
