@class EKObjectID;

@interface EKEventActionChange : EKObjectChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchEventActionChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchEventActionChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchEventActionChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
