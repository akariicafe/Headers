@class EKObjectID;

@interface EKOrganizerChange : EKParticipantChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchOrganizerChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchOrganizerChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchOrganizerChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
