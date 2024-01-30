@class EKObjectID;

@interface EKRecurrenceChange : EKObjectChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchRecurrenceChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchRecurrenceChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchRecurrenceChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
