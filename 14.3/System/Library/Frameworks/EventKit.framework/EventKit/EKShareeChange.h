@class EKObjectID;

@interface EKShareeChange : EKObjectChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchShareeChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchShareeChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchShareeChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
