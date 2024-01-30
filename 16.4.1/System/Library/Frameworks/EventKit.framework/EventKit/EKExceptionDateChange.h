@class EKObjectID, NSDate;

@interface EKExceptionDateChange : EKObjectChange <EKOwnerIDProviding>

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) EKObjectID *ownerID;

+ (int)entityType;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;
- (id)owningEventInEventStore:(id)a0;

@end
