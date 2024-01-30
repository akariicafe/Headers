@class EKObjectID, NSString;

@interface EKAttendeeChange : EKParticipantChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;
@property (readonly, nonatomic) BOOL attendeeRole;
@property (readonly, nonatomic) BOOL attendeeStatus;
@property (readonly, nonatomic) NSString *attendeeEmailAddress;

+ (int)entityType;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
