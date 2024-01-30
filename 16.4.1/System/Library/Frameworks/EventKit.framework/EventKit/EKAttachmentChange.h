@class EKObjectID, NSString;

@interface EKAttachmentChange : EKObjectChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *externalID;

+ (int)entityType;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
