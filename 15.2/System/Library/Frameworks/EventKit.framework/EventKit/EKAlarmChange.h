@class EKObjectID;

@interface EKAlarmChange : EKObjectChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchAlarmChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchAlarmChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchAlarmChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
