@class EKObjectID;

@interface EKContactChange : EKObjectChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchContactChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchContactChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchContactChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
