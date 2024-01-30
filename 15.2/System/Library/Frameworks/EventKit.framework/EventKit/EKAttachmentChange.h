@class EKObjectID;

@interface EKAttachmentChange : EKObjectChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchAttachmentChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchAttachmentChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchAttachmentChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
