@class EKObjectID;

@interface EKAttendeeChange : EKParticipantChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchAttendeeChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchAttendeeChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchAttendeeChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
